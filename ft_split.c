/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:59:57 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/15 09:47:21 by mamehri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_getstart(char const *s, char c)
{
	size_t	start;

	start = 0;
	while (s[start] && s[start] == c)
		start++;
	return (start);
}

static	size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		else if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static	void	ft_cpy(char **splited, char const *s, char c, size_t words_nbr)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	start = ft_getstart(s, c);
	j = start;
	while (i < words_nbr)
	{
		while (s[j] && s[j] != c)
			j++;
		splited[i] = ft_substr(s, start, j - start);
		if (!splited[i])
		{
			while (i > 0)
				free(splited[i--]);
			free(splited);
			return ;
		}
		while (s[j] && s[j] == c)
			j++;
		start = j;
		i++;
	}
	splited[words_nbr] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	words_nbr;
	char	**splited;

	if (!s)
		return (NULL);
	words_nbr = ft_countwords(s, c);
	splited = malloc(words_nbr * sizeof(char *) + (sizeof(char *)));
	if (!splited)
		return (NULL);
	if (!*s)
	{
		splited[0] = NULL;
		return (splited);
	}
	ft_cpy(splited, s, c, words_nbr);
	return (splited);
}
