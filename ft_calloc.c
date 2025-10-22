/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:26:09 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/22 21:25:26 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t elements, size_t size)
{
	size_t	*ptr;
	size_t	len;

	if (elements == 0 || size == 0)
		return (malloc(0));
	len = elements * size;
	ptr = malloc(len);
	ft_memset(ptr, 0, len);
	return (ptr);
}
