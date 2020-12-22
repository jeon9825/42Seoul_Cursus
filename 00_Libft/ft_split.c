/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:50:22 by jijeon            #+#    #+#             */
/*   Updated: 2020/12/22 13:24:42 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_count(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			++count;
			while (*str && *str != c)
				++str;
		}
		++str;
	}
	return (count);
}

static size_t	ft_word(char const *s, char c)
{
	size_t len;

	len = 0;
	while (*s && *s != c)
	{
		++len;
		++s;
	}
	return (len);
}

static char		*ft_strndup(char const *s, size_t n)
{
	size_t	i;
	char	*ret;

	if (!(ret = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (i < n)
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

static void		ft_free_arr(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	count;
	size_t	idx;
	size_t	word;

	count = ft_get_count(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * count + 1)))
		return (NULL);
	idx = 0;
	while (*s && idx < count)
	{
		while (*s && *s == c)
			++s;
		word = ft_word(s, c);
		if (!(ret[i] = ft_strndup(s, word)))
		{
			ft_free_arr(ret, i - 1);
			return (NULL);
		}
		s += word;
		idx++;
	}
	ret[count] = '\0';
	return (ret);
}
