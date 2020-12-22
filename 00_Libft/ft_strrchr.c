/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:10:25 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/22 11:14:20 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t slen;

	slen = ft_strlen(s);
	while (slen != 0)
	{
		if (*(s + slen) == c)
			return (char *)(s + slen);
		--slen;
	}
	return (NULL);
}
