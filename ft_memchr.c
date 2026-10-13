/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:12:41 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 10:44:02 by mamehri          ###   ########.fr       */
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

// int main()
// {
// 	const char *s = "\0 abcd";
// 	int c = 'c';
// 	size_t n = 5;

// 	printf("%s\n", (char *)ft_memchr(s, c, n));
// 	printf("%s\n", (char *)memchr(s, c, n));
// 	return (0);
// }