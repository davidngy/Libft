/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 14:08:27 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/11 15:25:43 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_i;
	size_t	src_size;
	size_t	dst_len;

	src_i = 0;
	i = 0;
	src_size = 0;
	dst_len = 0;
	while (src[src_size] != '\0')
		src_size++;
	while (dst[i] != '\0')
	{
		if (i >= dstsize)
			return (i + src_size);
		i++;
	}
	dst_len = i;
	while ((i < dstsize) && (src[src_i] != '\0'))
	{
		dst[i] = src[src_i];
		i++;
		src_i++;
	}
	dst[i] = '\0';
	printf("%zu, %zu\n", dst_len, src_size);
	return (dst_len + src_size);
}

int main()
{
	char src[] = " World!";
	char dst[8] = "Hello";

	char src1[] = " World!";
	char dst1[8] = "Hello";

	size_t len = ft_strlcat(dst, src, 8);
	size_t len_orig = strlcat(dst1, src1, 8);
	printf("%s, %zu\n", dst, len);
	printf("%s, %zu", dst1, len_orig);
}
