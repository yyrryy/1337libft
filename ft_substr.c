/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:05:53 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/25 17:13:50 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*dup;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len >= slen)
		len = slen - start;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[start + i];
		i++;
	}
	dup[start] = '\0';
	return (dup);
}
