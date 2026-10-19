/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:06:25 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/19 16:03:40 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		start;
	unsigned int		end;
	char				*trim;

	start = 0;
	end = ft_strlen(s1);
	while (((ft_strchr(set, s1[start]) != 0)
			|| (ft_strchr(set, s1[end]) != 0))
		&& (end > start) && (end > 0))
	{
		if (ft_strchr(set, s1[start]) != 0)
			start++;
		if (ft_strchr(set, s1[end]) != 0)
			end--;
	}
	if (start >= end)
	{
		trim = malloc(1);
		if (!trim)
			return (NULL);
		*trim = '\0';
	}
	else
		trim = ft_substr(s1, start, end - start);
	return (trim);
}

// int main()
// {
// 	char *str = ft_strtrim("   Hello   ", " ");
// 	printf("%s\n", str);
// 	free(str);
// 	char *str1 = ft_strtrim("xxxHelloxxx", "x");
// 	printf("%s\n", str1);
// 	free(str1);
// 	char *str2 = ft_strtrim("Hello", "x");
// 	printf("%s\n", str2);
// 	free(str2);
// 	char *str3 = ft_strtrim("aaaa", "a");
// 	printf("%s\n", str3);
// 	free(str3);
// 	char *str4 = ft_strtrim("", " ");
// 	printf("%s\n", str4);
// 	free(str4);
// }
