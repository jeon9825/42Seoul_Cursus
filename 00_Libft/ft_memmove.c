/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 15:30:25 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/23 12:47:21 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destp;
	const unsigned char	*srcp;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		destp = dest + n;
		srcp = src + n;
		while (n-- > 0)
		{
			*--destp = *--srcp;
		}
	}
	else
	{
		destp = dest;
		srcp = src;
		while (n-- > 0)
		{
			*destp++ = *srcp++;
		}
	}
	return (dest);
}
