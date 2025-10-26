/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:33:16 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/25 18:19:42 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	countwords(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && !(s[i] == c))
		{
			words++;
			while (s[i] && !(s[i] == c))
				i++;
		}
		i++;
	}
	return (words);
}

static size_t	lencurrentword(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && !(s[len] == c))
		len++;
	return (len);
}

static char	**freeall(char **result, int i)
{
	while (i > 0)
	{
		free(result[i - 1]);
		i--;
	}
	free(result);
	return (NULL);
}

static void	fill_word(char **result, const char *s, size_t word_idx, size_t pos, size_t len)
{
	size_t	j;

	result[word_idx] = malloc(len + 1);
	if (!result[word_idx])
		return ;
	j = 0;
	while (j < len)
	{
		result[word_idx][j] = s[pos + j];
		j++;
	}
	result[word_idx][j] = '\0';
}

static char	**buildwords(size_t i, int pos, const char *s, char c)
{
	size_t	len;
	char	**result;
	size_t	words;

	words = countwords(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < words)
	{
		while (s[pos] && s[pos] == c)
			pos++;
		len = lencurrentword(&s[pos], c);
		fill_word(result, s, i, pos, len);
		if (!result[i])
			return (freeall(result, i));
		pos += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	pos;

	i = 0;
	pos = 0;
	if (!s)
		return (NULL);
	return (buildwords(i, pos, s, c));
}
