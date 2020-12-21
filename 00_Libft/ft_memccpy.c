/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 14:36:11 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/21 15:29:16 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*destp;
	const unsigned char	*srcp;

	destp = dest;
	srcp = src;
	while (n > 0)
	{
		*destp = *srcp;
		if (*destp == (unsigned char)c)
			return (++destp);
		destp++;
		srcp++;
		n--;
	}
	return (NULL);
}
