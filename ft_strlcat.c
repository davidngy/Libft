/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 14:08:27 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/15 17:27:44 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (i < dstsize && dst[i] != '\0')
	{
		i++;
	}
	if (i >= dstsize)
		return (i + src_size);
	dst_len = i;
	while ((dstsize > 0) && (i < dstsize - 1) && (src[src_i] != '\0'))
	{
		dst[i++] = src[src_i++];
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (dst_len + src_size);
}
