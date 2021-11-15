/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:41:21 by atouba            #+#    #+#             */
/*   Updated: 2021/11/13 07:34:57 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"
//#include <stdio.h>
//ft_strlen is deleted, header is added
// what if dstsize >= len of dest?
// delete restrict

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] && dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize >= 1)
		dst[i] = '\0';
	if (ft_strlen(src) == 0 && dstsize > 0)
		dst[0] = '\0';
	return (ft_strlen(src));
}
//
// int main()
// {
// 	char a[38];

// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	// char src1[] = "coucou";
// 	char b[38];
// 	// memset(b, 'B', 10);
// 	printf("%ld ", ft_strlcpy(b, str, 37));
// 	printf("%ld\n", strlcpy(a, str, 37));
// 	printf("%s ", b);
// 	printf("%s\n", a);
// 	// printf("\n%s",  );
//     // char d[6];
//     // //char c[6];
//     // char s[] = "hello";
//     // //size_t l = strlcpy(d, s, 5);
// 	// // printf("%ld\n",strlcpy(d, s, 5));
//     // printf("%ld\n",strlcpy(d, s, 1));
//     // //printf("%s\n",d);
//     // printf("\n%zu\n", ft_strlcpy(d, s, 2));
//     // // printf("%s\n", c);
// }