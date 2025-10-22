/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliali <aaliali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:03:03 by aaliali           #+#    #+#             */
/*   Updated: 2025/10/20 08:17:47 by aaliali          ###   ########.fr       */
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
		first = new;
		return ;
	}
	while (first->next)
		first = first->next;
	first -> next = new;
}
