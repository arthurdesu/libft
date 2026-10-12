/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:42:16 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/12 19:12:34 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	a[10] = "abcdefghi";
// 	char	b[10] = "abcdefghi";
// 	size_t	i;

// 	bzero(a, 5);
// 	ft_bzero(b, 5);

// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d %d\n", a[i], b[i]);
// 		i++;
// 	}
//     return (0);
// }
