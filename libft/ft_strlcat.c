/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:24:16 by atouba            #+#    #+#             */
/*   Updated: 2021/11/13 09:49:04 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

//ft_strlen is deleted, header is added
//test the tests, when dstsize > < == len(dst)  len(src)
// why dstsize + ft_strlen(src) and not ft_strlen(src) + ft_strlen(dst)
// don't norminette
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	int		ans;

	ans = -404;
	i = 0;
	j = 0;
	if (ft_strlen(dst) == 0)
		ans = ft_strlen(src);
	if (dstsize == 0)
		return ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (ans != -404)
		return ans;
	return (dstsize + ft_strlen(src));
}
// dst[15] = "hello "    
// src = " world"

// int main()
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char buff1[0xF00] = "there is no stars in the sky";
// 	char buff2[0xF00] = "there is no stars in the sky";
// 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
//     char d[11] = "hello ";
//     char c[11] = "hello ";
//     char *s = "hello";
//     //size_t l = strlcpy(d, s, 5);
// 	char s1[4] = "";
// 	char s2[4] = "";
//     printf("%ld ", ft_strlcat(s1, "thx to ntoniolo for this test !", 4));
//     printf("%s\n",s1);
//     printf("%ld ", strlcat(s2, "thx to ntoniolo for this test !", 4));
//     printf("%s\n",s2);
//     // printf("\n%zu\n", ft_strlcpy(c, s, 9));
//     // printf("%s\n", c);
// 	// 19 28
// 	// dstsize == 23
// 	// printf("%ld", ft_strlen(str));
// }
