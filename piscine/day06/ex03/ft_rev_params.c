/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:12:07 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/16 20:16:00 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		return (1);
	*argv++ = (char*)(0);
	while (*(argv + 1))
		argv++;
	while (*argv)
	{
		ft_putstr(*argv--);
		ft_putchar('\n');
	}
	return (0);
}
