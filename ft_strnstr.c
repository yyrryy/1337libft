/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:15:16 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/22 15:34:38 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] && j < len - 1)
		{
			if (big[i] == little[j])
			{
				j++;
			}
			i++;
		}
		if (j == ft_strlen(little))
			return ((char *)(big + i - j));
		i++;
	}
	return (NULL);
}
