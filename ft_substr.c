/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:04:20 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/23 14:00:02 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			len_s;
	char			*sub;
	size_t			i;

	i = 0;
	len_s = ft_strlen(s);
	if (start >= len_s)
		sub = malloc(1);
	else
		sub = malloc(len_s - start + 1);
	if (sub == NULL)
		return (NULL);
	while ((i < len) && (start < len_s))
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}