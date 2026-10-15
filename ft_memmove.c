/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:55:31 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/15 17:35:09 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;
	size_t			i;

	i = 0;
	dst_c = (unsigned char *) dst;
	src_c = (unsigned char *) src;
	if (dst_c > src_c)
	{
		i = len - 1;
		while (i >= 0)
		{
			dst_c[i] = src_c[i];
			i--;
		}
	}
	else if (src_c > dst_c)
	{
		while (i < len)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	return (dst);
}

// int	main()
// {
// 	char	src[] ="ABCDE";
// 	char	src1[] ="ABCDE";
// 	memmove(src1 + 2, src1, 3);
// 	ft_memmove(src + 2, src, 3);
// 	printf("%s\n", src);
// 	printf("%s", src1);
// }
