/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:49:35 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/27 16:33:09 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	if ((nmeb == 0) || (size) == 0)
		return (malloc(0));
	if (nmeb > (SIZE_MAX / size))
		return (NULL);
	ptr = malloc(nmeb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmeb * size);
	return (ptr);
}

// int	main()
// {
// 	int	*ptr;
// 	ptr = ft_calloc(4, sizeof(int));
// 	for(int i = 0; i < 4; i++)
// 		printf("%d\n", ptr[i]);
// }