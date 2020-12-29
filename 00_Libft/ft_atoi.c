/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:43:27 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/29 23:47:21 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_isspace - ' ' '\f' '\n' '\r' '\t' '\v'
*/

static int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f' || c == '\n'
			|| c == '\r'
			|| c == '\t'
			|| c == '\v')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (ft_isdigit(*str))
	{
		num *= 10;
		num += *str - '0';
		++str;
		if (num * sign > 2147483647 || num * sign < -2147483648)
			return (sign == -1 ? 0 : -1);
	}
	return (num * sign);
}
