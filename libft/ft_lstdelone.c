/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:25:33 by atouba            #+#    #+#             */
/*   Updated: 2021/11/11 13:47:49 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	d(void *cont)
{
	free(cont);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
}

// void freeList(t_list* head)
// {
//    t_list *tmp;

//    while (head != NULL)
//     {
//        tmp = head;
//        head = head->next;
// 	   tmp = 0;
//        free(tmp);
// 	   tmp = 0;
//     }
// }

// int main()
// {
// 	t_list *root = malloc(sizeof(t_list));
// 	root->content = (void *)"one";
// 	root->next = malloc(sizeof(t_list));
// 	root->next->content = (void *)"two";
// 	root->next->next = 0;
// 	display(root);
// 	printf("\n");
// 	ft_lstdelone(root, d);
// 	display(root);
// 	printf("\n");
// 	freeList(root);
// 	display(root);
// }