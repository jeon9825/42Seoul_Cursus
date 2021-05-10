/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 22:06:25 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:08:26 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(char **out, const char *format, va_list ap)
{
	int		ctmp;
	int		count;
	char	*format_ptr;

	count = 0;
	format_ptr = (char *)format;
	while (*format_ptr)
	{
		if (*format_ptr == '%')
		{
			format_ptr++;
			if ((ctmp = ft_init_parsing(out, &format_ptr, ap, &count)) == -1)
				return (-1);
			count += ctmp;
		}
		else
		{
			ft_putchar_out(out, *format_ptr++);
			count++;
		}
	}
	return (count);
}
