/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:44:31 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/20 15:58:04 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_str(char *str_nr, int max, int n, int div)
{
	int		i;
	long	nbr;

	i = 0;
	nbr = n;
	if (n < 0)
		nbr = -nbr;
	while (i < max)
	{
		if (n < 0 && i == 0)
			str_nr[i] = '-';
		else
		{
			str_nr[i] = (nbr / div) + '0';
			nbr %= div;
			div /= 10;
		}
		i++;
	}
	str_nr[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		len;
	int		div;
	long	nbr;
	char	*str_nr;

	div = 1;
	len = 1;
	nbr = n;
	if (n < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr >= 10)
	{
		div *= 10;
		nbr /= 10;
		len++;
	}
	str_nr = malloc(len + 1);
	if (!str_nr)
		return (NULL);
	fill_str(str_nr, len, n, div);
	return (str_nr);
}

// int main()
// {
// 	char *s = ft_itoa(-34);
// 	printf("%s", s);
// }
