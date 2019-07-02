/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 14:42:25 by dlinde            #+#    #+#             */
/*   Updated: 2019/07/02 15:49:57 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_line(char **s, char **line, int fd, int red)
{
	char	*tmp;
	int		n;

	n = 0;
	while (s[fd][n] != '\n' && s[fd][n] != '\0')
		n++;
	if (s[fd][n] == '\n')
	{
		*line = ft_strsub(s[fd], 0, n);
		tmp = ft_strdup(s[fd] + n + 1);
		ft_strdel(&s[fd]);
		s[fd] = tmp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][n] == '\0')
	{
		if (red == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	static char		*s[200];
	int				red;

	if (fd < 0 || line == NULL || read(fd, buff, 0) < 0)
		return (-1);
	if (s[fd] == NULL)
		s[fd] = ft_strnew(0);
	while ((red = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[red] = '\0';
		tmp = ft_strjoin(s[fd], buff);
		ft_strdel(&s[fd]);
		s[fd] = tmp;
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (red < 0)
		return (-1);
	else if (red == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (ft_line(s, line, fd, red));
}
