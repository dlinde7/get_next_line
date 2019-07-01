/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:00:17 by dlinde            #+#    #+#             */
/*   Updated: 2019/07/01 11:37:11 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	n;

	n = 0;
	if (s == NULL || start > ft_strlen(s) ||
			(new = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (0);
	while (n < len && s[start] != '\0')
	{
		new[n] = s[start + n];
		n++;
	}
	new[n] = '\0';
	return (new);
}
