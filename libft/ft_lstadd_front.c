/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:56:59 by atouba            #+#    #+#             */
/*   Updated: 2021/11/12 00:30:44 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new_list;

// 	new_list = malloc(sizeof(t_list));
// 	new_list->content = content;
// 	new_list->next = 0;
// 	return (new_list);
// }
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int ft_lstsize(t_list *lst)
// {
// 	t_list	*curr;
// 	int		i;

// 	i = 0;
// 	curr = lst;
// 	while (curr != 0)
// 	{
// 		i++;
// 		curr = curr->next;
// 	}
// 	return (i);
// }

// void ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*curr;

// 	curr = *lst;
// 	while (curr->next != 0)
// 		curr = curr->next;
// 	curr->next = new;
// }
// int main()
// {
// 	char a[] = "three";
// 	t_list *new = ft_lstnew((void *)a);
// 	t_list *root = ft_lstnew((void *)"one");
// 	root->next = malloc(sizeof(t_list));
// 	root->next->content = (void *)"two";
// 	root->next->next = 0;
// 	ft_lstadd_front(&root, new);
// 	display(root);
// 	printf("%d ", ft_lstsize(root));
// 	t_list	*last = ft_lstnew((void *)"addedLast");
// 	ft_lstadd_back(&root, last);
// 	printf("\n");
// 	display(root);
	
// }