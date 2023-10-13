/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:32:26 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 17:54:08 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst->content)
		del(lst->content);
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

// 	el0->content = (int *)malloc(sizeof(int));
// 	*(int *)el0->content = 42;
// 	printf("%d\n", *(int *)(el0)->content);
// 	ft_lstdelone(el0, &ft_free);
// 	printf("%d\n", *(int *)(el0)->content);
// 	return (0);
// }
