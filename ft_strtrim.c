/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:06:25 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/18 16:06:25 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		start;
	unsigned int		end;
	int					j;
	char 	*trim;
	
	start = 0;
	end = ft_strlen(s1) - 1;
	j = 0;
	while (s1[start] == set[j])
	{
		start++;
		j++;
		if (j == (ft_strlen(set)))
			j = 0;
	}
	j = ft_strlen(set) - 1;
	while (s1[end] == set[j])
	{
		end--;
		j--;
		if (j == -1)
			j = ft_strlen(set) -  1;
	}
	trim = malloc(ft_strlen(ft_substr(s1, start, end - start)) + 1);
	if(trim == NULL)
		return (NULL);
	trim = ft_substr(s1, start, (end - start) + 1);
	return (trim);
}

int main()
{
	char *str = ft_strtrim("xwzxwzxwzzhellozxwz", "xwz");
	printf("%s", str);
}