/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:19:24 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/20 16:57:11 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char) ch)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char) ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
// int main()
// {
// 	char *str2 = "bonjour";
// 	char *result = ft_strchr(str2, 'b');
// 	printf("%s", result);
// }