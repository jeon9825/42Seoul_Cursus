/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:17:43 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/23 14:32:53 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t llen;

	if (*little == '\0')
		return (char *)big;
	llen = ft_strlen(little);
	while (*big != '\0' && len >= llen)
	{
		if (*big == *little)
			if (ft_strncmp(big, little, llen) == 0)
				return (char *)big;
		++big;
		--len;
	}
	return (NULL);
}
