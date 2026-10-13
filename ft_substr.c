/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:38:40 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 22:38:47 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		len = 0;
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len && s[i + start])
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main()
// {
// 	char const *s = "hello";
// 	unsigned int start = 5;
// 	size_t len = 3;
// 	char *sub = ft_substr(s, start, len);
// 	if (!sub)
// 	{
// 		printf("Failed\n");
// 		return (1);
// 	}
// 	printf("|%s|\n", sub);
// 	free(sub);
// 	return (0);
// }