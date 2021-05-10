/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:32:35 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:37:11 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_type(va_list ap, t_format *fp)
{
	if (**fp->ptr == 'd' || **fp->ptr == 'i')
		return (ft_print_number(ap, fp));
	if (**fp->ptr == 'u')
		return (ft_print_unsigned_number(ap, fp));
	if (**fp->ptr == 'c')
		return (ft_print_char(ap, fp));
	if (**fp->ptr == 's')
		return (ft_print_string(ap, fp));
	if (**fp->ptr == 'n')
		return (ft_print_cnt(ap, fp));
	if (**fp->ptr == '%')
		return (ft_print_percent(ap, fp));
	if (**fp->ptr == 'o')
		return (ft_print_octal(ap, fp));
	if (**fp->ptr == 'x' || **fp->ptr == 'X')
		return (ft_print_hex(ap, fp));
	if (**fp->ptr == 'p')
		return (ft_print_pointer(ap, fp));
	if (**fp->ptr == 'f' || **fp->ptr == 'e' || **fp->ptr == 'g')
		return (ft_print_float(ap, fp));
	free(fp);
	return (0);
}
