/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:38:28 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/28 11:08:31 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned const char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
