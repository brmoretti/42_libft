/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:56:08 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 16:08:01 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*el;

	if (!lst)
		return (NULL);
	el = lst;
	while (el->next)
		el = el->next;
	return (el);
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
// 	ft_lstadd_front(&el3, el2);
// 	ft_lstadd_front(&el2, el1);
// 	ft_lstadd_front(&el1, el0);
// 	printf("%s\n", (char *)ft_lstlast(el0)->content);
// 	return (0);
// }
