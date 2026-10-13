/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:32:33 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 10:12:13 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (unsigned char)s1[i] == (unsigned char)s2[i]
		&& s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main() {
//     const char *str1 = "\200";
//     const char *str2 = "a";

//     for (size_t n = 0; n <= 20; n++)
//         printf("%d : %d\n", strncmp(str1, str2, n), 
// 				ft_strncmp(str1, str2, n));

//     return 0;
// }