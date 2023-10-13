/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:44:21 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 18:28:03 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*el;

	if (!lst || del)
		return ;
	el = *lst;
	while (el)
	{
		ft_lstdelone(el, del);
		el = el->next;
	}
	lst = NULL;
}

#include <stdlib.h>
#include <stdio.h>

static void	ft_free(void *ptr)
{
	free (ptr);
}

int	main(void)
{
	t_list	*el0;
	t_list	*el1;
	t_list	*el2;

	el0->content = (int *)malloc(sizeof(int));
	el1->content = (int *)malloc(sizeof(int));
	el2->content = (int *)malloc(sizeof(int));
	// *(int *)el0->content = 42;
	// *(int *)el1->content = 43;
	// *(int *)el2->content = 44;
	// ft_lstadd_back(&el0, el1);
	// ft_lstadd_back(&el0, el2);
	// printf("%d\n", *(int *)(el0)->content);
	// printf("%d\n", *(int *)(el1)->content);
	// printf("%d\n", *(int *)(el2)->content);
	// ft_lstclear(&el0, &ft_free);
	// printf("%d\n", *(int *)(el0)->content);
	// printf("%d\n", *(int *)(el1)->content);
	// printf("%d\n", *(int *)(el2)->content);
	return (0);
}
