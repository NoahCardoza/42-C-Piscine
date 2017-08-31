#include <stdio.h>
#include <stdlib.h>
// #include "../day13/ex05/btree_search_item.c"

#define MAX(x, y) (x ^ ((x ^ y) & - (x < y)))

int	main(void)
{
	// printf("%d\n",  MAX(5, 7));
	int x = 7648;
	int y = 654;
	printf("%d\n", (x ^ y));
	printf("%d\n", (x ^ (x ^ y)));
	printf("%d\n", - (x < y));
	printf("%d\n", (x ^ ((x ^ y) & - (x < y))));
	// argc++;
}
