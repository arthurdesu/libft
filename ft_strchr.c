/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:35:04 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 08:49:48 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

// int main()
// {
// 	int c = 'a' + 256;
// 	const char s[30] = "1337; the future is loading!";
// 	printf("%s\n", ft_strchr(s, c));
// 	printf("%s\n", strchr(s, c));
// 	return (0);
// }
