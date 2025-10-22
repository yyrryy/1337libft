/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:38:49 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/22 14:41:15 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	inset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	end;
	int		iptr;

	end = ft_strlen(s1);
	i = 0;
	while (s1[i] && inset(s1[i], set))
		i++;
	while (s1[end] && inset(s1[end], set))
		end--;
	ptr = malloc((end - i) + 1);
	if (!ptr)
		return (NULL);
	iptr = 0;
	while (s1[i] && i < end)
	{
		ptr[iptr] = s1[i];
		i++;
		iptr++;
	}
	ptr[iptr] = '\0';
	return (ptr);
}
