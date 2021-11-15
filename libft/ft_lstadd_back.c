/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:13:37 by atouba            #+#    #+#             */
/*   Updated: 2021/11/14 11:30:39 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// why the second version works and

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!*lst)
		*lst = new;
	else
	{
		curr = ft_lstlast(*lst);
		curr->next = new;
	}
}

// doesn't work

// void ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*curr;

// 	curr = *lst;
// 	while (curr->next != 0)
// 		curr = curr->next;
// 	curr->next = new;
// }