/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:33:14 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/30 13:58:46 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	long	x;
	size_t	i;

	x = n;
	i = 0;
	if (x < 0)
	{
		x *= -1;
		i++;
	}
	while (x > 0)
	{
		x /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	z;
	size_t	i;

	z = n;
	i = ft_len(z);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (z == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (z < 0)
	{
		str[0] = '-';
		z *= -1;
	}
	while (z > 0)
	{
		str[i--] = (z % 10) + 48;
		z /= 10;
	}
	return (str);
}
