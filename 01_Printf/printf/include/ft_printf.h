/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 22:07:57 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/24 22:10:30 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "ft_printf_util.h"
# include "ft_printf_type.h"
# include "ft_printf_parse.h"
# include "ft_print.h"

int	ft_printf(const char *format, ...);
int	ft_sprintf(char *out, const char *format, ...);
int	ft_print(char **out, const char *format, va_list ap);

#endif
