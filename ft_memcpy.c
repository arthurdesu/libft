/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:00:28 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/12 19:23:34 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Hello, world";
// 	char	a[20];
// 	char	b[20];

// 	memset(a, 'X', sizeof(a));
// 	memset(b, 'X', sizeof(b));

// 	memcpy(a, src, 5);
// 	ft_memcpy(b, src, 5);

// 	if (memcmp(a, b, sizeof(a)) == 0)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");
// 	return (0);
// }
