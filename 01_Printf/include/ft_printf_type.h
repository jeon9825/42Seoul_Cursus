/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:52:27 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:56:24 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_TYPE_H
# define FT_PRINTF_TYPE_H

# include <stdarg.h>

typedef struct	s_flag
{
	char	dash;
	char	zero;
	char	blank;
	char	plus;
	char	hash;
}				t_flag;

typedef struct	s_format
{
	t_flag	flag;
	char	visit_width;
	int		width;
	char	visit_precision;
	int		precision;
	int		h_count;
	int		l_count;
	char	**out;
	char	**ptr;
	int		*cnt;
}				t_format;

#endif
