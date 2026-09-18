/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabani-h <mabani-h@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:50:59 by mabani-h          #+#    #+#             */
/*   Updated: 2026/09/18 10:39:29 by mabani-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = f (lst -> content);
		new_node = ft_lstnew (content);
		if (!new_node)
		{
			del (content);
			ft_lstclear (&new_list, del);
			return (NULL);
		}
		ft_lstadd_back (&new_list, new_node);
		lst = lst -> next;
	}
	return (new_list);
}
