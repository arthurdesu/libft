/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:18:06 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/26 07:10:42 by mamehri          ###   ########.fr       */
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

static	size_t	ft_getsart(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_search(set, s1[start]))
		start++;
	return (start);
}

static	size_t	ft_count(char const *s, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		count;

	i = 0;
	if (!*s)
		return (0);
	if (ft_strlen(s) == 0)
		j = 0;
	else
		j = ft_strlen(s) - 1;
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
	while (j > i && ft_search(set, s[j]))
		j--;
	return (count - ft_strlen(s) + j + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	count;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_getsart(s1, set);
	count = ft_count(s1, set);
	return (ft_substr(s1, start, count));
}
