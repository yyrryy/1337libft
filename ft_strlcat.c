/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:55:44 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/22 15:40:09 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(src);
	d_len = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	if (d_len == size)
		return (s_len + d_len);
	while (src[i] && (d_len + i + 1) < size)
	{
		dst[d_len] = src[i];
		i++;
	}
	if (d_len + i < size)
		dst[d_len] = '\0';
	return (s_len + d_len);
}
