/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 09:31:33 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/18 09:44:46 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp;
	int tmp2;

	tmp = *******c;
	*******c = ***a;
	tmp2 = ****d;
	****d = tmp;
	tmp = *b;
	*b = tmp2;
	***a = tmp;
}
