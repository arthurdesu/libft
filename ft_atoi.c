/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:00:15 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/18 19:40:01 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	result;
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
	{
		result = (result * 10) + (nptr[i++] - '0');
		if (result > LONG_MAX && sign == -1)
			return (0);
		else if (result > LONG_MAX && sign == 1)
			return (-1);
	}
	return (result * sign);
}
