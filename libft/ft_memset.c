/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:42:34 by atouba            #+#    #+#             */
/*   Updated: 2021/11/15 11:24:32 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

#include "libft.h"

// ft_strlen is deleted, and I included the header file
// update 0: the function was ko (in the second test) because 
//the while condition
// was i < len && i < ft_strlen(b) , and that's wrong 
//because in some tests 
// len > ft_strlen(b), and the function must copy c len times, 
// no matter how len is
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main()
{
    char x[] = "hello there";
    char y[] = "hello there";
    //memset(x + 3, 65, 20);
    ft_memset((void *)y + 3, 65, 20);
    printf("%s\n", x);
    printf("%s", y);
}*/
