/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:33:16 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/26 20:44:30 by aaliali          ###   ########.fr       */
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
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static size_t	lencurrentword(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*fill_word(char *result, const char *s, size_t index_str, size_t len)
{
	size_t	j;

	result = malloc(len + 1);
	if (!result)
		return (NULL);
	j = 0;
	while (j < len)
	{
		result[j] = s[index_str + j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;
	size_t	index_str;

	if (!s)
		return (NULL);
	words = countwords(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	index_str = 0;
	while (i < words)
	{
		while (s[index_str] && s[index_str] == c)
			index_str++;
		result[i] = fill_word(result[i], s, index_str, lencurrentword(&s[index_str], c));
		if (!result[i])
			return (NULL);
		index_str += lencurrentword(&s[index_str], c);
		i++;
	}
	result[i] = NULL;
	return (result);
}
