/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:41:49 by atouba            #+#    #+#             */
/*   Updated: 2021/11/15 13:51:57 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

static	long long	isneg(char c, int *i)
{
	if (c == '-')
	{
		*i = *i + 1;
		return (-1);
	}
	if (c == '+')
		*i = *i + 1;
	return (1);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	ans;
	long long			sign;

	i = 0;
	ans = 0;
	sign = 0;
	while (str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
		|| (str[i] >= '0' && str[i] <= '9'))
	{
		sign = isneg(str[i], &i);
		while (str[i] >= '0' && str[i] <= '9')
		{
			ans += (str[i] - '0');
			ans *= 10;
			i++;
		}
	}
	return (ans  * (sign / 10));
}

int main()
{
	char n[] = "  -922";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	// char escape[] = {9, 10, 11, 12, 13, 0, '+', '1'};
//	printf("%s", escape);
    printf("%d\n",i1);
    printf("%d",i2);
}