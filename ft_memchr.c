/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:12:41 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/18 18:42:23 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n - 1 && *((unsigned char *)s + i) != (unsigned char)c)
		i++;
	if (*((unsigned char *)s + i) != (unsigned char)c)
		return (NULL);
	return ((void *)s + i);
}
