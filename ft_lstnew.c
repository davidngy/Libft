/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:46:31 by david             #+#    #+#             */
/*   Updated: 2026/10/22 16:05:43 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main()
// {
// 	t_list *node;
// 	node = ft_lstnew("Hello");
// 	if(node == NULL)
// 		return(1);
// 	printf("Node address: %p\n", (void *)node);
//     printf("Content: %s\n", (char *)node->content);
//     printf("Next: %p\n", (void *)node->next);
//     return (0);
// }
