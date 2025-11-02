/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:24:30 by aaliali           #+#    #+#             */
/*   Updated: 2025/11/01 21:30:46 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	checkedge(int i, const char *str, int s)
{
	long long	r;
	long long	temp;

	r = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		temp = r;
		r = r * 10 + str[i] - '0';
		if (r < temp)
		{
			if (s == 1)
				return (-1);
			return (0);
		}
		i++;
	}
	return (r * s);
}

int	ft_atoi(const char *str)
{
	int			s;
	int			i;

	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	return (checkedge(i, str, s));
}
