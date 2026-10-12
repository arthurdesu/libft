/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:16:26 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/12 19:28:52 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	a[20] = "0123456789";
// 	char	b[20] = "0123456789";
// 	char	c[20] = "0123456789";
// 	char	d[20] = "0123456789";

// 	/* dst after src (must copy backward) */
// 	memmove(a + 3, a, 6);
// 	ft_memmove(b + 3, b, 6);
// 	printf("forward overlap:  %s\n", memcmp(a, b, 20) == 0 ? "OK" : "KO");

// 	/* dst before src (copy forward is safe) */
// 	memmove(c, c + 3, 6);
// 	ft_memmove(d, d + 3, 6);
// 	printf("backward overlap: %s\n", memcmp(c, d, 20) == 0 ? "OK" : "KO");

// 	return (0);
// }
