/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:57:47 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 19:08:40 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size != 0)
	{
		if ((nmemb * size) / size != nmemb)
			return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

// int main(void)
// {
// 	int *arr1 = calloc(5, sizeof(int));
// 	int *arr2 = ft_calloc(5, sizeof(int));

// 	if (arr1 == NULL || arr2 == NULL)
// 		return (1);

// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("arr1 : |%d|\n", arr1[i]);
// 		printf("arr2 : |%d|\n", arr2[i]);
// 	}

// 	free(arr1);
// 	free(arr2);
// 	return (0);
// }