/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:43:36 by atouba            #+#    #+#             */
/*   Updated: 2021/11/15 15:34:36 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// "6284"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long long	res;

	// res = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		// res *= -1;
		n *= -1;
		res = n;
	}
	if (res > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

// int main()
// {
// 	ft_putnbr_fd(0, 1);
// }