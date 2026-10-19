/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:11:06 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/19 18:35:54 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (i + j < len && big[i])
	{
		if (big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
