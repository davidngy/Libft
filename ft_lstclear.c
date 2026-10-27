/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:50:43 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/23 17:23:37 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	list = *lst;
	while (list)
	{
		del(list->content);
		next = list->next;
		free(list);
		list = next;
	}
	*lst = NULL;
}
