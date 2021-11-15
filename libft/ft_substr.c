/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:41:22 by atouba            #+#    #+#             */
/*   Updated: 2021/11/13 11:58:10 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

// "hello" 
// start = 3
// len = 7
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	unsigned int	real_start;
	char	*ans;

	real_start = start;
	i = 0;
	if (!s)
		return (0);
	ans = malloc(len + 1);
	if (!ans)
		return (0);
	else
	{
		while (len-- && s[start] != '\0')
		{
			ans[i] = s[start];
			i++;
			start++;
		}
		ans[i] = '\0';
	}
	if (real_start >= ft_strlen(s))
	{
		ans = malloc(sizeof(char));
		ans[0] = '\0';
	}
	return (ans);
}

// int main()
// {
// 	char *str = "i just want this part #############";
// 	size_t size = 10;
//     char *a = "hello there";
//     printf("%s", ft_substr(str, 5, size));
// }