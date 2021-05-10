/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:40:48 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:46:57 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_width(va_list ap, t_format *fp)
{
	int	width;

	width = 0;
	fp->visit_width = 0;
	if (**(fp->ptr) == '*')
	{
		if ((fp->width = va_arg(ap, int)) < 0)
		{
			fp->width = -fp->width;
			fp->flag.dash = 1;
		}
		++(*fp->ptr);
	}
	else
	{
		while (ft_isdigit(**(pf->ptr)))
		{
			width *= 10;
			width = (**pf->ptr) - '0';
			++(*pf->ptr);
		}
		fp->width = width;
	}
	return (ft_parse_check(ap, pf));
}
