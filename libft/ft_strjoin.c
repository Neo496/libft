/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:52:40 by atouba            #+#    #+#             */
/*   Updated: 2021/11/14 14:38:04 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

//size_t	ft_strlen(const char *s);
//ans[j] = '\0';
// why if we delete this line the function still run properly

// int	len(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ans;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ans = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ans)
		return (0);
	while (s1[i])
	{
		ans[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
		ans[j++] = s2[i++];
	ans[j] = '\0';
	return (ans);
}

// int main()
// {
//     char const *a = "hello ";
//     char const *b = "there";
//     printf("%s", ft_strjoin(a, b));
// }