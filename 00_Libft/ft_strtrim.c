/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:19:27 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/23 14:33:50 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*ret;
	size_t	len;

	while (*s && ft_strchr(set, *s) != 0)
		s++;
	len = ft_strlen(s);
	while (len && s[len - 1] && ft_strchr(set, s[len - 1]) != 0)
		len--;
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_memcpy(ret, s, len);
	ret[len] = '\0';
	return (ret);
}
