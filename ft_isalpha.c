/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:38:15 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/12 13:28:48 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122));
}

// int main(void)
// {
// 	for (int c = '0'; c <= '9'; c++)
//     	printf("%c: %d\n", c, ft_isalpha(c));
// 	for (int c = 'A'; c <= 'Z'; c++)
//     	printf("%c: %d\n", c, ft_isalpha(c));
// 	return (0);
// }
