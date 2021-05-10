/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:26:39 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:31:35 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_precision(va_list ap, t_format *fp)
{
	char	**format;
	int		precision;

	format = fp->ptr;
	precision = 0;
	fp->visit_precision = 1;
	++(*format);
	if (**format == '*')
	{
		if ((fp->precision = va_arg(ap, int)) < 0)
			fp->visit_precision = 0;
		++(*format);
	}
	else
	{
		while (ft_isdigit(**format))
		{
			precision *= 10;
			precision += **format - '0';
			++(*format);
		}
		fp->precision = precision;
	}
	return (ft_parse_check(ap, fp));
}
