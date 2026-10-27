/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:11:48 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/23 17:23:02 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int	main()
// {
// 	t_list	*head;
// 	t_list	*new;

// 	head = ft_lstnew("head");
// 	new = ft_lstnew("new");
// 	ft_lstadd_front(&head, new);
// 	printf("%s, %p, %p\n", (char *) head->content, head->next, head);
// 	printf("%s, %p\n", (char *) new->content, new->next);
// }
