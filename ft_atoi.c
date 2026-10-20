/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davinguy <davinguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:05:56 by davinguy          #+#    #+#             */
/*   Updated: 2026/10/20 15:56:03 by davinguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	is_neg;
	int	nr;

	nr = 0;
	is_neg = 0;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (!(nptr[i] >= '0' && nptr[i] <= '9') && nptr[i] != '-' && nptr[i] != '+')
		return (0);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			is_neg = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nr = nr * 10 + (nptr[i++] - '0');
	if (is_neg == 1)
		return (-nr);
	return (nr);
}

// int main()
// {
// 	int	mine = ft_atoi("-83647");
// 	printf("mine: %d", mine);
// }
