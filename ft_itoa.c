/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:49:09 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/17 16:42:47 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_getlen(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static	void	ft_append(char *nbrstr, long nbr, long nbrstr_len)
{
	char	nbr_s[2];

	if (nbr < 0)
	{
		nbrstr[0] = '-';
		nbrstr[1] = '\0';
		nbr *= -1;
	}
	if (nbr <= 9)
	{
		nbr_s[0] = nbr + '0';
		nbr_s[1] = '\0';
		ft_strlcat(nbrstr, nbr_s, nbrstr_len);
		return ;
	}
	ft_append(nbrstr, nbr / 10, nbrstr_len);
	ft_append(nbrstr, nbr % 10, nbrstr_len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*nbrstr;
	long	nbrstr_len;

	nbr = n;
	nbrstr_len = ft_getlen(n) + 1;
	nbrstr = malloc(nbrstr_len);
	if (!nbrstr)
		return (NULL);
	nbrstr[0] = '\0';
	ft_append(nbrstr, nbr, nbrstr_len);
	return (nbrstr);
}
