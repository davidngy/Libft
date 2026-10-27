/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:20:52 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/23 15:25:06 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int		i;
	size_t	words;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			words++;
		}
	}
	return (words);
}

static int	clear_arr(char **split, unsigned int fail)
{
	unsigned int		i;

	i = 0;
	while (i < fail)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

static int	fill_words(size_t split_len, const char *s, char c, char **split)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	size_t			len;

	i = 0;
	j = 0;
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
		if (!split[i])
			return (clear_arr(split, i));
		i++;
	}
	split[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t		split_len;
	char		**split;
	int			clean;

	split_len = count_words(s, c);
	split = malloc(sizeof(char *) * (split_len + 1));
	if (!split)
		return (NULL);
	clean = fill_words(split_len, s, c, split);
	if (!clean)
		return (NULL);
	return (split);
}

// int main()
// {
// 	char *test = "HEyalesakioralje";
// 	char **inHere = ft_split(test, 'a');
// 	for(int i = 0; i <= 4; i++)
// 	{
// 		printf("%s\n", inHere[i]);
// 		free(inHere[i]);
// 	}
// 	free(inHere);
// }