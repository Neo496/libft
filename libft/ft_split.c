/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:25:32 by atouba            #+#    #+#             */
/*   Updated: 2021/11/14 11:03:03 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	n_char(char	const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

int	n_words(char const *s, char c)
{
	int	i;
	int	ws;

	ws = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && i == 0)
			ws++;
		else if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0' && i > 0)
			ws++;
		i++;
	}
	return (ws + 1);
}
// "sp th  fo!  "
char	**tab(char const *s, char c)
{
	int		i;
	int		n;
	int		word_count;
	char	**ans;

	if (!s)
		return (0);
	ans = malloc(sizeof(char *) * n_words(s, c));
	if (!ans)
		return (0);
	word_count = 0;
	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			ans[word_count] = malloc(sizeof(n_char(s + i, c)));
			word_count++;
			i += n_char(s + i, c);
		}
		else
			i++;
	}
	ans[n_words(s, c) - 1] = 0;
	return (ans);
}

//char	*ft_strncpy()
// don't forget to replace strncpy function with ft_strlcpy 
// difference between strlcpy and strncpy
char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		i;
	int		w_count;

	w_count = 0;
	i = 0;
	ans = tab(s, c);
	if (!ans)
		return (0);
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			strlcpy(ans[w_count], s + i, n_char(s + i, c) + 1);
			i += n_char(s + i, c);
			w_count++;
		}
		else
			i++;
	}
	return (ans);
}

// int main()
// {
//     //char *a = "heyheyhelloeana";
// 	char *string = "  sp    h     ffd";

// 	char *s = "      split       this for   me   !       ";

	

// 	char *s1 = "split  ||this|for|me|||||!|";
// 	char **result = ft_split(s1, '|');
// 	// char **result = ft_split(s, '|');
//     //printf("%d  %d", n_words(a, 'e'), tab(a, 'e'));
//     int i = 0;
//   //  char **x = ft_split("  tripouille  42  ", ' ');
// //    printf("%d", n_words("  tripouille  42  ", ' '));
// 	// while (i < n_words(string, ' '))
//     // {
//        printf("%s", result[i++]);
//     // }
//     // printf("%d \n%ld", n_words(s, ' '), n_char(s + 1, ' '));
// }