/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:55:31 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/20 16:19:15 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;
	size_t			i;

	i = 0;
	dst_c = dst;
	src_c = src;
	if (dst_c > src_c)
	{
		i = len;
		while (i > 0)
		{
			--i;
			dst_c[i] = src_c[i];
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
// 	char	dest[] ="conseipsum dolor sit a";
// 	// memmove(dest, "consectetur", 5);
// 	ft_memmove(dest, "consectetur", 5);
// 	printf("%s\n", dest);
// 	// printf("%s", src1);
// }