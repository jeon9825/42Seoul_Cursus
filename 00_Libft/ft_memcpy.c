/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:09:31 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/21 14:26:25 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destp;
	const unsigned char	*srcp;

	if (!dest && !src)
		return (NULL);
	destp = dest;
	srcp = src;
	while (n > 0)
	{
		*destp++ = *srcp++;
		n--;
	}
	return (dest);
}
