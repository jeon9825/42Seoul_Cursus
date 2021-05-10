/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 21:14:46 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 21:20:22 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>
# include "ft_printf_type.h"
# include "libft.h"

int						ft_print_number(va_list ap, t_format *fp);
int						ft_print_unsigned_number(va_list ap, t_format *fp);
int						ft_print_char(va_list ap, t_format *fp);
int						ft_print_string(va_list ap, t_format *fp);
int						ft_print_cnt(va_list ap, t_format *fp);
int						ft_print_percent(va_list ap, t_format *fp);
int						ft_print_octal(va_list ap, t_format *fp);
int						ft_print_hex(va_list ap, t_format *fp);
int						ft_print_pointer(va_list ap, t_format *fp);
int						ft_print_float(va_list ap, t_format *fp);
int						ft_print_float_nan(va_list ap, t_format *fp);

long long int			ft_get_extend_id(va_list ap, t_format *fp);
unsigned long long int	ft_get_extend_u(va_list ap, t_format *fp);
wint_t					ft_get_extend_c(va_list ap, t_format *fp);
char					ft_get_extend_s(va_list ap, t_format *fp);

#endif
