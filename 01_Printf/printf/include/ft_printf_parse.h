/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:48:46 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:51:56 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PARSE_H
# define FT_PRINTF_PARSE_H

# include <stdarg.h>
# include "libft.h"
# include "ft_printf_type.h"

int	ft_init_parsing(char **out, char **format, va_list ap, int *cnt);
int	ft_parse_check(va_list ap, t_format *fp);
int	ft_parse_flag(va_list ap, t_format *fp);
int	ft_parse_width(va_list ap, t_format *fp);
int	ft_parse_precision(va_list ap, t_format *fp);
int	ft_parse_exten_type(va_list ap, t_format *fp);
int	ft_parse_type(va_list ap, t_format *fp);

#endif
