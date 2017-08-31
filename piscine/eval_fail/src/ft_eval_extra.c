/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_extra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 14:29:39 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/27 22:59:17 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

char	next_opp_i(char *expr)
{
	while (*expr && ft_is_whitespace(*expr))
		expr++;
	if (expr)
		return (*expr);
	return (0);
}

char	next_opp(char **expr)
{
	if (ft_trim(expr))
		return (*(*expr)++);
	return (0);
}
