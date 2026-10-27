/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:49:28 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/23 14:54:52 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main()
// {
// 	t_list	*one;
// 	t_list	*two;
// 	t_list	*three;
// 	t_list	*four;
// 	int		size;
// 	one = ft_lstnew("one");
// 	two = ft_lstnew("two");
// 	three = ft_lstnew("three");
// 	four = ft_lstnew("four");
// 	one->next = two;
// 	two->next = three;
// 	three->next = four;
// 	size = ft_lstsize(one);
// 	one = ft_lstlast(one);
// 	printf("%d", size);
// 	printf("\n %s", (char *) one->content);
// }