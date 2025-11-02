/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:03:03 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/28 17:57:42 by aaliali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first;

	if (!lst || !new)
		return ;
	first = *lst;
	if (!first)
	{
		*lst = new;
		return ;
	}
	while (first->next)
		first = first->next;
	first -> next = new;
}
