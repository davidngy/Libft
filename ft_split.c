/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:20:52 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/19 17:20:52 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	len;
	unsigned int	split_len;
	char	**split;

	split_len = 0;
	i = 0;
	while(s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;	
		if(s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			split_len++;
		}
	}
	split = malloc(sizeof(char *) * (split_len + 1));
	i = 0;
	j = i;
	while (i < split_len)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		len = 0;
		k = j;
		while (s[j] != c && s[j] != '\0')
		{
			len++;
			j++;
		}
		split[i] = ft_substr(s, k, len);	
		i++;
	}
	split[i] = NULL;
	return split;
}

int main()
{
	char *test = "HEyalesakioralje";
	char **inHere = ft_split(test, 'a');
	for(int i = 0; i < 5; i++)
	{
		printf("%s\n", inHere[i]);
		free(inHere[i]);
	}
	free(inHere);
}