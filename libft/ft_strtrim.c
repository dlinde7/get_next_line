/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:26:36 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/30 14:16:49 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	n;
	size_t	i;
	size_t	x;

	n = 0;
	if (!s)
		return (0);
	x = ft_strlen(s);
	while (s[n] != '\0' && (s[n] == ' '
				|| s[n] == '\n' || s[n] == '\t'))
		n++;
	if (s[n] == '\0')
		return (ft_strnew(0));
	while (n < x && (s[x - 1] == ' '
				|| s[x - 1] == '\n' || s[x - 1] == '\t'))
		x--;
	i = x - n;
	return (ft_strsub(s, n, i));
}
