/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:48:52 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/14 15:48:26 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_list;
	t_list	*new_el;

	if (!lst || !f)
		return (NULL);
	new_el = ft_lstnew(f(lst->content));
	if (!new_el)
		return (NULL);
	new_list = &new_el;
	lst = lst->next;
	while (lst)
	{
		new_el = ft_lstnew(f(lst->content));
		if (!new_el)
		{
			ft_lstclear(new_list, del);
			return (NULL);
		}
		ft_lstadd_back(new_list, new_el);
		lst = lst->next;
	}
	return (*new_list);
}
