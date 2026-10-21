/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:59:52 by david             #+#    #+#             */
/*   Updated: 2026/10/21 16:35:25 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	print_nbr(long div, long nbr, int fd)
{
	long	print;

	while (div >= 1)
	{
		print = nbr / div;
		nbr %= div;
		ft_putchar_fd((print + '0'), fd);
		div /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	long	size;
	long	div;

	div = 1;
	nbr = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	size = nbr;
	while (size >= 10)
	{
		size /= 10;
		div *= 10;
	}
	print_nbr(div, nbr, fd);
}

// int main()
// {
// 	ft_putnbr(-234, 1);
// }