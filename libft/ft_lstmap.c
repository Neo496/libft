/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:34:50 by atouba            #+#    #+#             */
/*   Updated: 2021/11/15 09:53:20 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*change(void *pt)
// {
// 	int	i = 0;
// 	int len = ft_strlen((char *)pt);
// 	while (i < len)
// 	{
// 		*(char *)(pt + i) -= 32;
// 		i++;
// 	}
// 	return (pt);
// }

// void	d(void *pt)
// {
// 	free(pt);
// }

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	**root = &lst;
// 	t_list	*curr;
// 	// void	*tempo;
// 	// int		i = 0;
	
// 	// root = lst;
// 	// curr = lst;
// 	while (lst)
// 	{
// 		curr = lst;
// 		// del(lst->content);
// 		// free(lst);
// 		//lst = malloc(sizeof(t_list));
// 		lst->content = malloc(sizeof(f(curr->content)));
// 		ft_memcpy(lst->content, f(curr->content), ft_strlen((char *)f(curr->content)));
// 		lst = curr->next;
// 	}
// 	// lst->next = 0;
// 	return (*root);
// }

// void	display(t_list *root)
// {
// 	t_list *curr = root;
// 	while(curr != 0)
// 	{
// 		printf("%s ", (char *)curr->content);
// 		curr = curr->next;
// 	}
// }

// int	main()
// {
// 	void *a = "one";
// 	void *b = "two";
// 	void *c = "three";
// 	t_list	*head = malloc(sizeof(t_list));
// 	head->content = a;
// 	head->next = malloc(sizeof(t_list));
// 	head->next->content = b;
// 	head->next->next = malloc(sizeof(t_list));
// 	head->next->next->content = c;	
// 	head->next->next->next = 0;
// 	// head->next = ft_lstnew(b);
// 	// head->next->next = ft_lstnew(c);

// 	head = ft_lstmap(head, change, d);
// 	// char a[] = "hello";
// 	// change(a);
// 	// printf("%s", a);
// 	display(head);
	
// }