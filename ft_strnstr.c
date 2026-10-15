/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:45:17 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/14 14:45:17 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;
	size_t	same;

	len_little = ft_strlen(little);
	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while ((i < len) && (big[i] != '\0'))
	{
		same = 0;
		j = i;
		while ((j < len) && (big[i] != '\0') && (big[j] == little[same]))
		{
			if (len_little == (same + 1))
				return ((char *) &big[j - same]);
			j++;
			same++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char big[] = "Hello Wor ld asdf";
// 	char *result = ft_strnstr(big, "World", 11);
// 	printf("%s", result);
// }