/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamehri <mamehri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:59:57 by mamehri           #+#    #+#             */
/*   Updated: 2026/10/20 15:39:07 by mamehri          ###   ########.fr       */
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

static	void	ft_free(char **splited, size_t i)
{
	while (i > 0)
	{
		i--;
		free(splited[i]);
	}
	free(splited);
}

static	int	ft_cpy(char **splited, char const *s, char c, size_t words_nbr)
{
	size_t	i;
	size_t	end;
	size_t	start;

	i = 0;
	start = ft_getstart(s, c);
	end = start;
	while (i < words_nbr)
	{
		while (s[end] && s[end] != c)
			end++;
		splited[i] = ft_substr(s, start, end - start);
		if (!splited[i])
		{
			ft_free(splited, i);
			return (1);
		}
		while (s[end] && s[end] == c)
			end++;
		start = end;
		i++;
	}
	splited[words_nbr] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words_nbr;
	char	**splited;

	if (!s)
		return (NULL);
	words_nbr = ft_countwords(s, c);
	splited = malloc((words_nbr + 1) * (sizeof(char *)));
	if (!splited)
		return (NULL);
	if (ft_cpy(splited, s, c, words_nbr))
		return (NULL);
	return (splited);
}
