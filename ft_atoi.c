/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:00:15 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/13 17:56:13 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13)) && nptr[i])
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i])
		result = (result * 10) + (nptr[i++] - '0');
	return (result * sign);
}

// int	main()
// {
// 	const char *nptr = "2147483648";
// 	const char *nptr = "   -123abc456";
// 	const char *nptr = "   +123abc456";
// 	const char *nptr = "---123";
// 	const char *nptr = "++123";
// 	const char *nptr = "-+123";
// 	const char *nptr = "123abc456";
// 	const char *nptr = "  \t \n \r \v 0abc123abc456";

// 	printf("|%d|\n", ft_atoi(nptr));
// 	printf("|%d|\n", atoi(nptr));
// 	return (0);
// }