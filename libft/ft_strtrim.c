/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:33:09 by atouba            #+#    #+#             */
/*   Updated: 2021/11/15 15:09:24 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//size_t	len(const char *s);

static	int	is_here(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1[0] == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int	min_cpy(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (is_here(s1 + i, set) == 1)
			i++;
		else
			break ;
	}
	return (i);
}

// ls1--; was in line 46
static	int	max_cpy(char const *s1, char const *set)
{
	int	ls1;

	ls1 = ft_strlen(s1);
	while (ls1--)
	{
		if (is_here(s1 + ls1, set) == 0)
			break ;
	}
	return (ls1 + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		i;
	int		j;
	int		max_len;

	j = 0;
	if (!s1)
		return (0);
	i = min_cpy(s1, set);
	max_len = max_cpy(s1, set);
	ans = malloc(sizeof(char) * (max_len - i + 1));
	if (max_len == 0)
	{
		ans = malloc(sizeof(char));
		ans[0] = '\0';
		return (ans);
	}
	if (!ans)
		return (0);
	while (i < max_len)
		ans[j++] = s1[i++];
	ans[j] = '\0';
	return (ans);
}

// int main()
// {
// 	char *s1 = "helloHave a nice a dayelloh";
// 	char *s2 = "leho";
// 	// char const*s1 = "237131337hey 1337 hey13a1777777777372";
// 	// char const*set = "7331";
// 	// printf("%c\n", s1[14]);
// 	// printf("%zu\n", ft_strlen(s1));
// 	// printf("%d\n", is_here(s1, set));
// 	// //printf("%d\n", alloc(s1, set));
// 	// printf("%d\n", max_cpy(s1, set));
// 	printf("%s", ft_strtrim(s1, s2));
// }