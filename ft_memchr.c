/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:46:26 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/20 17:38:29 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char str[] = "Hola lwas gleht lbei dir so ab!";
// 	char *new = memchr(str, 'l', 5);
// 	// int arr[] = {10, 30, 40};
// 	// int *new = ft_memchr(arr, 30, 8);
// 	// for(int i = 0; i < 2; i++)
// 	// {
// 	// 	printf("%d", new[i]);
// 	// }
// 	printf("%s", new);
// }
