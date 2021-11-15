/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:46:07 by atouba            #+#    #+#             */
/*   Updated: 2021/11/13 18:08:09 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

static	int	length(int n)
{
	int	i;
	
	if (n == -2147483648)
		return (11);
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*int_min()
{
	char	*ans;

	ans = malloc(sizeof(char) * (1 + length(-2147483648)));
	ans = "-2147483648";
	return (ans);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;
	int		real_l;
	int		i;
	int		min;
	long long	N;

	min = 0;
	i = 0;
	l = length(n);
	real_l = l;
	
	N = n;
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		N *= -1;
		min = 1;
	}
	l--;
	while (l >= min)
	{
		str[l] = (N % 10) + '0';
		N /= 10;
		l--;
	}
	str[real_l] = '\0';
	return (str);
}
// // for example, n == +6443 or ++6443?
// int main()
// {
//     int a = -2147483648;
//     printf("%s", ft_itoa(a));
// }