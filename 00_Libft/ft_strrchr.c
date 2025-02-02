/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:10:25 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/23 15:36:54 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t slen;

	slen = ft_strlen(s);
	while (slen > 0 && *(s + slen) != c)
		slen--;
	if (*(s + slen) == c)
		return (char *)(s + slen);
	return (NULL);
}
