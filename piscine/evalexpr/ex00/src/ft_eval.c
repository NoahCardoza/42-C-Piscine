/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 13:51:41 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/27 23:37:17 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

int		parse_pran(char **expr, char prev_opp)
{
	int		sum;
	char	opp;

	++(*expr);
	sum = next_summands(expr, '\0');
	while (**expr && **expr != ')')
	{
		opp = next_opp(expr);
		sum = ft_exe(sum, opp, next_summands(expr, opp));
	}
	++(*expr);
	if (prev_opp == '*' || prev_opp == '/')
			return (sum);
	opp = next_opp_i(*expr);
	if ((opp == '*' || opp == '/') && prev_opp != '%')
	{
		next_opp(expr);
		sum = ft_exe(sum, opp, next_summands(expr, opp));
	}
	return (sum);
}

int		next_summands(char **expr, char prev_opp)
{
	char	opp;
	int		sum;

	ft_trim(expr);
	if (**expr == '(')
		return (parse_pran(expr, prev_opp));
	else
	{
		sum = ft_atoi(expr);
		if (prev_opp == '*' || prev_opp == '/')
			return (sum);
		opp = next_opp_i(*expr);
		if ((opp == '*' || opp == '/') && prev_opp != '%')
		{
			next_opp(expr);
			return (ft_exe(sum, opp, next_summands(expr, opp)));
		}
		else
			return (sum);
	}
}

int		eval_expr2(char **expr)
{
	int		sum;
	char	opp;

	sum = next_summands(expr, '\0');
	while (**expr)
	{
		if ((opp = next_opp(expr)))
		{
			if (opp == '*' || opp == '/')
				sum = ft_exe(sum, opp, next_summands(expr, opp));
			else
				sum = ft_exe(sum, opp, next_summands(expr, opp));
		}
	}
	return (sum);
}

int		eval_expr(char *expr)
{
	return (eval_expr2(&expr));
}
