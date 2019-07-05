/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:52:38 by dlinde            #+#    #+#             */
/*   Updated: 2019/07/05 21:37:24 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*add_line(char *file, char *buff)
{
	char	*tmp;

	if (!file || !buff)
		return (NULL);
	tmp = ft_strjoin(file, buff);
	ft_strdel(&file);
	return (tmp);
}

static char		*ft_line(char *file, char **line)
{
	int		n;
	char	*tmp;

	n = 0;
	while (file[n] != '\n' && file[n] != '\0')
		n++;
	*line = ft_strsub(file, 0, n);
	if (file[n] == '\0')
	{
		tmp = NULL;
		ft_strdel(&file);
	}
	else
	{
		tmp = ft_strsub(file, n + 1, ft_strlen(file + n) + 1);
		ft_strdel(&file);
	}
	return (tmp);
}

int				get_next_line(const int fd, char **line)
{
	static char		*file[1025];
	char			buff[BUFF_SIZE + 1];
	int				rd;

	if (fd < 0 || !line || (rd = read(fd, buff, 0)) < 0)
		return (-1);
	if (!file[fd])
		file[fd] = ft_strnew(0);
	if (!ft_strchr(file[fd], '\n'))
	{
		while ((rd = read(fd, buff, BUFF_SIZE)) > 0)
		{
			buff[rd] = '\0';
			file[fd] = add_line(file[fd], buff);
			if (ft_strchr(file[fd], '\n'))
				break ;
		}
	}
	if (rd < BUFF_SIZE && !ft_strlen(file[fd]))
		return (0);
	file[fd] = ft_line(file[fd], line);
	return (1);
}
