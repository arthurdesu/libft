/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:46:27 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 11:09:56 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1
		&& *((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}

// int main()
// {
// 	const unsigned char s1[4] = "1336";
// 	const unsigned char s2[4] = "1337";
// 	size_t n = 4;

// 	printf("%d : %d\n", ft_memcmp(s1, s2, n), memcmp(s1, s2, n));
// 	return (0);
// }