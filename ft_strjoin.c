/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:13:34 by aaliali           #+#    #+#             */
/*   Updated: 2025/11/01 15:16:12 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*joining(size_t s1len, size_t s2len, const char *s1, const char *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = malloc(s1len + s2len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s1len)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < s2len)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s2len;
	size_t	s1len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	return (joining(s1len, s2len, s1, s2));
}
