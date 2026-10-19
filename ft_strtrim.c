/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:18:06 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/19 21:22:29 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_search(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	size_t	ft_count(char const *s, char const *set, size_t *start)
{
	size_t	i;
	int		j;
	size_t	count;

	i = 0;
	j = (int)(ft_strlen(s) - 1);
	count = ft_strlen(s);
	while (s[i])
	{
		if (ft_search(set, s[i]))
		{
			count--;
			i++;
		}
		else
			break ;
	}
	*start = i;
	while (j >= 0 && ft_search(set, s[j]))
	{
		count--;
		j--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	count;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 42;
	count = ft_count(s1, set, &start);
	return (ft_substr(s1, start, count));
}
