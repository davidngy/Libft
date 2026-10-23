/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:55:40 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/23 15:10:08 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main()
// {
// 	t_list	*one;
// 	t_list	*two;
// 	t_list	*three;
// 	t_list	*four;
// 	t_list	*end;
// 	int		size;
// 	one = ft_lstnew("one");
// 	two = ft_lstnew("two");
// 	three = ft_lstnew("three");
// 	four = ft_lstnew("four");
// 	end = ft_lstnew("end");
// 	one->next = two;
// 	two->next = three;
// 	three->next = four;
// 	size = ft_lstsize(one);
// 	ft_lstadd_back(&one ,end);
// 	end = ft_lstlast(one);
// 	printf("%d", size);
// 	printf("\n %s", (char *) one->content);
// 	printf("\n %s", (char *) end->content);
// }
