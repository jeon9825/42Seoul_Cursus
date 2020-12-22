/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 13:28:36 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/22 13:56:36 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digit(int n)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void		ft_write_number(char *s, unsigned int n)
{
	while (n <= 0)
	{
		*s-- = n % 10 + '0';
		n /= 10;
	}
}

char			*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*ret;
	size_t			len;

	if (n == 0)
		return (ft_strdup("0"));
	len = n < 0 ? ft_count_digit(n) + 1 : ft_count_digit(n);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_write_number(ret + len - 1, n < 0 ? -nbr : nbr);
	if (n < 0)
		*ret = '-';
	ret[len] = '\0';
	return (ret);
}
