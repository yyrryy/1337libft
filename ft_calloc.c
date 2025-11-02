/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:26:09 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/26 17:26:34 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t elements, size_t size)
{
	void	*ptr;
	size_t	len;

	if (elements == 0 || size == 0)
		return (malloc(0));
	if (elements > SIZE_MAX / size)
		return (NULL);
	len = elements * size;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, len);
	return (ptr);
}
