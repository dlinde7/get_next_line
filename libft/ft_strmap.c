/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:43:28 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/28 11:21:27 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		n;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (s[i] && f)
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
