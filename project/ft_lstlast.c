/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:56:08 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/17 15:29:32 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	t_list	*l;
// 	t_list	*expected;
// 	t_list	*actual;

// 	l = ft_lstnew(strdup("1"));
// 	l->next = ft_lstnew(strdup("2"));
// 	l->next->next = ft_lstnew(strdup("3"));
// 	expected = l->next->next;
// 	actual = ft_lstlast(l);
// 	printf("actual: %p, expected: %p\n", actual, expected);
// 	return (0);
// }
