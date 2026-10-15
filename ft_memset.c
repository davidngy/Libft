/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:34:24 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/15 17:26:23 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt;

	i = 0;
	pt = (unsigned char *) s;
	while (i < n)
	{
		pt[i] = c;
		i++;
	}
	return (0);
}
