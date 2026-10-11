/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:47:59 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/11 13:03:53 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
		dst[i - 1] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
