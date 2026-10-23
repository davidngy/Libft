/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 14:28:06 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/23 14:41:05 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
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
// 	printf("%d", size);
// }