/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:50:31 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/13 12:02:40 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// int	main()
// {
// 	char str[] = "Hola como estas";
// 	char str1[] = "Hola como estas";
// 	bzero(str + 2, 4);
// 	ft_bzero(str1 + 2, 4);
// 	printf("orig: %s\n", str);
// 	printf("yours: %s", str1);
// }
