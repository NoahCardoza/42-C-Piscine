/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 12:06:15 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/13 23:42:19 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_putchar(char c);

int		main(void)
{
	rush(1, 0);
	ft_putchar('\n');
	rush(2, 2);
	ft_putchar('\n');
	rush(3, 3);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	return (0);
}
