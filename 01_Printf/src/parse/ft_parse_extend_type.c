/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_extend_type.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:17:07 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:20:26 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_extend_type(va_list ap, t_format *fp)
{
	char	**format;

	format = fp->ptr;
	if (**format == 'h')
		fp->h_count += 1;
	if (**format == 'l')
		fp->l_count += 1;
	++(*format);
	return (ft_parse_check(ap, fp));
}
