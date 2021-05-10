/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:09:21 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:11:28 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_parsing(char **out, char **format, va_list ap, int *cnt)
{
	t_format	*fp;

	if (!(fp = ft_init_format(out, format, cnt)))
		return (-1);
	return (ft_parse_check(ap, pf));
}
