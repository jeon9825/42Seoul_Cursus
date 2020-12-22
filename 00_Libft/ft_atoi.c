/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:43:27 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/22 11:56:23 by jijeon           ###   ########.fr       */
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
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while ('0' <= *str && *str <= '9')
	{
		num *= 10;
		num += (sign * (*str - '0'));
		++str;
	}
	return (num);
}
