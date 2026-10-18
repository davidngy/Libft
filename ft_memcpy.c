/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:07:43 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/15 17:25:24 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_c;
	const unsigned char	*src_c;

	dst_c = dest;
	src_c = src;
	i = 0;
	while (i < n)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char	src[] = "Hello";
// 	char	dst[6];
// 	char	src1[] = "Hello";
// 	char	dst1[6];
// 	memcpy(dst, src, 3);
// 	printf("%s \n", dst);
// 	ft_memcpy(dst1, src1, 3);
// 	printf("%s \n", dst1);
// }
