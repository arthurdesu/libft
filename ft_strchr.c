/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 22:35:04 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/12 22:58:26 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{

}

int main()
{
	const char s[30] = "1337; the \0 future is loading!";
	printf("%c\n", ft_strchr(s, 'f')[0]);
	return (0);
}
