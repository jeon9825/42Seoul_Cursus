/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:22:24 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:25:41 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_flag(va_list ap, t_format *fp)
{
	char	**format;

	format = fp->ptr;
	if (**format == '-')
		fp->flag.dash = 1;
	if (**format == '0')
		fp->flag.zero = 1;
	if (**format == ' ')
		fp->flag.blank = 1;
	if (**format == '+')
		fp->flag.plus = 1;
	if (**format == '#')
		fp->flag.hash = 1;
	++(*format);
	return (ft_parse_check(ap, fp));
}
