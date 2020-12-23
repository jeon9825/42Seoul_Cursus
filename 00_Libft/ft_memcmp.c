/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 12:59:02 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/23 14:30:54 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1ptr;
	const unsigned char *s2ptr;

	s1ptr = (const unsigned char *)s1;
	s2ptr = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s1ptr != *s2ptr)
			return (*s1ptr - *s2ptr);
		s1ptr++;
		s2ptr++;
	}
	return (0);
}
