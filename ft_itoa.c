/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:08:04 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/19 15:15:58 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	countdigits(long n)
{
	int	c;

	c = 1;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static char	*cases(int digits, long nb, int isnegative)
{
	int		toalloc;
	int		i;
	char	*ptr;

	toalloc = digits + isnegative;
	ptr = malloc(toalloc + 1);
	if (!ptr)
		return (NULL);
	ptr[toalloc] = '\0';
	i = toalloc - 1;
	while (digits--)
	{
		ptr[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (isnegative)
		ptr[0] = '-';
	return (ptr);
}

static char	*fillptr(long nb)
{
	int	digits;
	int	isnegative;

	isnegative = 0;
	if (nb < 0)
	{
		isnegative = 1;
		nb = -nb;
	}
	digits = countdigits(nb);
	return (cases(digits, nb, isnegative));
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nb;

	nb = n;
	if (nb == 0)
	{
		ptr = malloc(2);
		if (!ptr)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	return (fillptr(nb));
}
