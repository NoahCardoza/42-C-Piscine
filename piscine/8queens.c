#include <stdlib.h>
#include <stdio.h>

#define N 14

// Please excuse my lack of comments ¯\_(ツ)_/¯

int **arr2d(int rows, int cols) // This creates aa 2d array (the board).
{
	int **ptr = (int **)malloc(sizeof(int*)*N);
	int i;
	int j;

	i = 0;
	while (i < rows){
		ptr[i]=(int*)malloc(sizeof(int)*N); 
		j = 0;
		while (j < cols){
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return ptr;
}

void free2d(int **arr, int r) // This frees a 2d array (the board).
{
	while (r--)
	{
		free(arr[r]);
	}
	free(arr);
}

void put2d(int **arr, int r, int c){ // This prints out the board all fancy like!
	int j, i;
	i = 0;
	while (i < r)
	{
		j = 0;
		while (j < c){
			printf("%d ", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}

int safe(int row, int col, int **board) // This checks if a certain row col combo is safe
{
	int r = 0, c = 0;
	while(r < row)
	{
		c = 0;
		while (c < N)
		{
			if (c == col || r+c == row+col || c-r == col-row){
				if (board[r][c])
					return 0;
			}
			c++;
		}
		r++;
	}
	return 1;
}

static int count = 0; // Our solutions counter.

void solve(int row, int **board) // This solves the N queens problem.
{
	if (row >= N)
		return;
	int col;
	col = 0;
	while (col < N)
	{
		if (safe(row, col, board))
		{
			board[row][col] = 1;
			if (row == N-1)
			{
				put2d(board, N, N);
				count++;
				board[row][col] = 0;
				return;
			}
			solve(row+1, board);
			board[row][col] = 0;
		}
		col++;
	}
}


int main()
{
	int **board = arr2d(N, N);
	solve(0, board);
	printf("Total solutions: %d\n", count);
	free2d(board, N);
}
