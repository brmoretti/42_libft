/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:29:10 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/14 11:35:33 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*el;

	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		el = *lst;
		while (el->next)
			el = el->next;
		el->next = new;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*el0;
// 	t_list	*el1;
// 	t_list	*el2;
// 	t_list	*el3;

// 	el0 = ft_lstnew("42");
// 	el1 = ft_lstnew("43");
// 	el2 = ft_lstnew("44");
// 	el3 = ft_lstnew("45");
// 	ft_lstadd_back(&el3, el2);
// 	ft_lstadd_back(&el2, el1);
// 	ft_lstadd_back(&el1, el0);
// 	printf("%s\n", (char *)ft_lstlast(el0)->content);
// 	return (0);
// }
