/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:26:09 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/23 14:42:37 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	int a[4] = "100";
// 	char b[4] = "100";
// 	//ft_memset(a, 3, 1);
// 	memset(a, 3, 1);
// 	ft_memset(b, 3, 1);
// 	// ft_memset(&a, 199, 1);
// 	printf("");
// 	printf("==> std %s \n", a);
// 	printf("==> ft %s", b);
// }