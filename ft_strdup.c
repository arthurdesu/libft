/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:47:37 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 19:05:32 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_len;
	char	*duplicate;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	duplicate = malloc(s_len + 1);
	if (!duplicate)
		return (NULL);
	while (s[i])
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

// int main(void) 
// {
//     const char *original1 = "Hello, World!";
//     const char *original2 = "Hello, World!";

//     char *duplicate1 = strdup("");
//     char *duplicate2 = ft_strdup("");

//     if (duplicate1 == NULL || duplicate2 == NULL) {
//         perror("Allocation failed");
//         return 1;
//     }

//     printf("Original  1	:  |%s|\n", original1);
//     printf("Duplicate 1	:  |%s|\n", duplicate1);

//	   printf("Original  2	:  |%s|\n", original2);
//     printf("Duplicate 2	:  |%s|\n", duplicate2);

//     free(duplicate1);
//     free(duplicate2);

//     return 0;
// }