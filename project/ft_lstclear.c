/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:44:21 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/14 12:20:46 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*el;
	t_list	*next_el;

	if (!lst || !*lst)
		return ;
	el = *lst;
	while (el)
	{
		next_el = el->next;
		ft_lstdelone(el, del);
		el = next_el;
	}
	*lst = NULL;
}

// #include <stdlib.h>
// #include <stdio.h>

// static void	ft_free(void *ptr)
// {
// 	free (ptr);
// }

// int	main(void)
// {
// 	t_list	*el0;
// 	t_list	*el1;
// 	t_list	*el2;
// 	int		*ptr0;
// 	int		*ptr1;
// 	int		*ptr2;

// 	ptr0 = malloc(sizeof(int));
// 	ptr1 = malloc(sizeof(int));
// 	ptr2 = malloc(sizeof(int));
// 	*ptr0 = 42;
// 	*ptr1 = 43;
// 	*ptr2 = 44;
// 	el0 = ft_lstnew(ptr0);
// 	el1 = ft_lstnew(ptr1);
// 	el2 = ft_lstnew(ptr2);
// 	ft_lstadd_back(&el0, el1);
// 	ft_lstadd_back(&el0, el2);
// 	printf("%d\n", *(int *)(el0)->content);
// 	printf("%d\n", *(int *)(el1)->content);
// 	printf("%d\n", *(int *)(el2)->content);
// 	ft_lstclear(&el0, &ft_free);
// 	printf("%d\n", *(int *)(el0)->content);
// 	printf("%d\n", *(int *)(el1)->content);
// 	printf("%d\n", *(int *)(el2)->content);
// 	return (0);
// }
