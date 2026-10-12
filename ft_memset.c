/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:47:17 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/12 19:30:45 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s + i) = c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     char buffer1[10];
//     char buffer2[10];

//     ft_memset(buffer1, 'A', 5);
//     memset(buffer2, 'A', 5);
//     buffer1[5] = '\0';
//     buffer2[5] = '\0';

//     printf("%s\n", buffer1);
//     printf("%s\n", buffer2);
//     return (0);
// }
