/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:33:39 by atouba            #+#    #+#             */
/*   Updated: 2021/11/15 07:16:57 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curr;

//	curr = *lst;
	while (*lst)
	{
		//ft_lstdelone(*lst, del);
		curr = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = curr;
		// curr = curr->next;
	}
	// }
	lst = 0;
}