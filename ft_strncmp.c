/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:55:45 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/15 17:30:11 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((s1[i] != '\0') && (s2[i] != '\0')) || (i < n))
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
