/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 09:03:05 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/16 09:55:27 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmap;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	lstmap = ft_lstnew(f(lst->content));
	if (!lstmap)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&lstmap, new);
	}
	return (lstmap);
}
