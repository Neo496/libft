/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:33:29 by atouba            #+#    #+#             */
/*   Updated: 2021/11/13 16:41:43 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static	size_t	len(char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// int main()
// {
// 	char a[] = "Hello world";
// 	ft_striteri(a, nece_mod);
// 	printf("%s", a);
// }