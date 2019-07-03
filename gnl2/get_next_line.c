/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:52:38 by dlinde            #+#    #+#             */
/*   Updated: 2019/07/03 17:32:37 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				get_next_line(const int fd, char **line)
{
	static char		*file[1023];
	char			buff[BUFF_SIZE + 1];

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	if (find_line(fd, file, buff) == -1)
		return (-1);
	else
		return(ft_line(fd, file, line));
}
	
static int		find_line(const int fd, char **file, char *buff)
{
	size_t	rd;
	char	tmp[];

	while ((rd = read(fd, buff, BUFF_SIZE)))
	{
		buff[rd] = '\0';
		tmp = ft_strjoin(file[fd], buff);
		ft_strdel(file[fd]);
		file[fd] = tmp;
		free(tmp);
		if (ft_strchr(file[fd], '\n'))
			break ;
	}
	if (rd >= 0)
		return(1);
	else
		return(-1);
}

static int		ft_line(const int fd, char **file, char **line)
{
	size_t	n;
	size_t	i;
	char	*s;
	char	tmp[];

	s = ft_strchr(file[fd], '\n');
	n = ft_strlen(file[fd]);
	i = ft_strlen(s);
	if (n == n - i)
	{
		*line = ft_strdup(file[fd]);
		ft_strdel(file[fd]);
		return (0);
	}
	else
	{
		*line = ft_strsub(file[fd], 0, n);
		tmp = ft_strsub(files[fd], n + 1, i + 1);
		return (1);
	}
}
