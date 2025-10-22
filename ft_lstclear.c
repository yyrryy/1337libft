/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:17:09 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/20 08:20:13 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*thisnod;
	t_list	*next;

	if (!lst || !del)
		return ;
	thisnod = *lst;
	while (thisnod)
	{
		next = thisnod->next;
		ft_lstdelone(thisnod, del);
		thisnod = next;
	}
	*lst = NULL;
}
