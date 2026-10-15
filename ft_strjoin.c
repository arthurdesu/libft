/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:48:29 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/14 10:39:50 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*concatenate;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	concatenate = malloc(((s1_len + s2_len)) + 1);
	if (!concatenate)
		return (NULL);
	ft_memcpy(concatenate, s1, s1_len);
	concatenate[s1_len] = '\0';
	ft_strlcat(concatenate, s2, s2_len + s1_len + 1);
	return (concatenate);
}

// int	main()
// {
// 	char *s1 = "Hello";
// 	char *s2 = "World";

// 	printf("|%s|\n", ft_strjoin(s1, s2));
// 	return (0);
// }