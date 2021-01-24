/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijeon <jijeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:24:37 by jijeon            #+#    #+#             */
/*   Updated: 2021/01/22 16:15:01 by jijeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	backup_join(char **backup, char *buf, ssize_t read_size)
{
	char	*tmp;

	buf[read_size] = '\0';
	if (*backup != 0)
	{
		tmp = ft_strjoin(*backup, buf);
		free(*backup);
	}
	else
		tmp = ft_strndup(buf, read_size);
	*backup = tmp;
	if (ft_strchr(*backup, '\n'))
		return (1);
	return (0);
}

static int	check_line(char **backup, char **line)
{
	char	*ptr;
	char	*tmp;

	if ((ptr = ft_strchr(*backup, '\n')))
	{
		*line = ft_strndup(*backup, ptr - *backup);
		tmp = ft_strndup(ptr + 1, ft_strlen(ptr + 1));
		free(*backup);
		*backup = tmp;
		return (1);
	}
	else
	{
		*line = *backup;
		*backup = 0;
		return (0);
	}
}

int			get_next_line(int fd, char **line)
{
	static char	*backup[OPEN_MAX];
	ssize_t		read_size;
	char		*buf;

	if (fd < 0 || fd >= OPEN_MAX || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buf = (char*)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((read_size = read(fd, buf, BUFFER_SIZE)) >= 0)
	{
		if (backup_join(&backup[fd], buf, read_size) || read_size == 0)
			break ;
	}
	free(buf);
	if (read_size < 0)
		return (-1);
	return (check_line(&backup[fd], line));
}
