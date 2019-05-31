/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:46:50 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/28 14:52:19 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*l1;
	t_list	*l2;

	l1 = *alst;
	while (l1)
	{
		l2 = l1->next;
		del(l1->content, l1->content_size);
		free(l1);
		l1 = l2;
	}
	*alst = NULL;
}
