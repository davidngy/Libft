/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:07:43 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/13 12:33:03 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char *) dest;
	src_c = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	return (0);
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
