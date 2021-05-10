/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:11:53 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/27 16:23:27 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse_check(va_list ap, t_format *fp)
{
	char	**format;

	format = fp->ptr;
	if (!**format)
	{
		free(fp);
		return (0);
	}
	if (ft_strchr("-0+# ", **format))
		return (ft_parse_flag(ap, fp));
	if (ft_strchr("123456789*", **format))
		return (ft_parse_width(ap, fp));
	if (ft_strchr(".", **format))
		return (ft_parse_precision(ap, fp));
	if (ft_strchr("lh", **format))
		return (ft_parse_extend_type(ap, fp));
	if (ft_strchr("cspdiuxXnfgeo%", **format))
		return (ft_parse_type(ap, fp));
	free(fp);
	return (0);
}
