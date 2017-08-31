/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 13:20:43 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/25 22:28:21 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MEM_SIZE 4096
#define STACK_SIZE 2048

int main(int argc, char *argv[])
{
	char *mem;
	char *cmd;
	char **stk;
	char *loop;
	char memory[MEM_SIZE];
	char *stack[STACK_SIZE];

	mem = memory;
	cmd = *++argv;
	stk = stack;
	while (*cmd)
	{
		if (*cmd == '+')
			++*mem;
		else if (*cmd == '-')
			--*mem;
		else if (*cmd == '>')
			(mem == (memory + MEM_SIZE - 1) ? (mem = memory) : ++mem);
		else if (*cmd == '<')
			(mem == memory ? (mem = (memory + MEM_SIZE - 1)) : --mem);
		else if (*cmd == '[')
			*stk++ = cmd;
		else if (*cmd == ']')
			if (*mem)
				cmd = *(stk - 1);
			else
				stk--;
		else if (*cmd == '.')
			write(1, mem, 1);
		cmd++;
	}
}
