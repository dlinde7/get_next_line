/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:17:35 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/28 16:09:13 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*l1;
	t_list		*l2;
	t_list		*l3;

	if (!lst || !f)
		return (NULL);
	l1 = f(lst);
	if (!(l2 = ft_lstnew(l1->content, l1->content_size)))
		return (NULL);
	lst = lst->next;
	l3 = l2;
	while (lst)
	{
		l1 = f(lst);
		if (!(l2->next = ft_lstnew(l1->content, l1->content_size)))
			return (NULL);
		l2 = l2->next;
		lst = lst->next;
	}
	return (l3);
}
