/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:09:23 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/15 18:20:17 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	int	ft_lstsize(t_list *lst)
{
	t_list			*current;
	unsigned int	size;

	if (!lst)
		return (0);
	size = 1;
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
