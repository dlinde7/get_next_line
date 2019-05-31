/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:01:24 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/28 11:24:56 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1;
	size_t		i;

	i = 0;
	s1 = (const char *)s;
	while (i < n)
	{
		if (s1[i] == (const char)c)
			return ((void *)s1 + i);
		i++;
	}
	return (0);
}
