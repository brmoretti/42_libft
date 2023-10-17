/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:19:20 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/17 15:30:01 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
// 	printf("%d\n", ft_lstsize(el0));
// 	return (0);
// // }

// #include <string.h>

// int	main(void)
// {
// 	t_list	*l;
// 	int	actual;
// 	int	expected;

// 	l = ft_lstnew(strdup("1"));
// 	l->next = ft_lstnew(strdup("2"));
// 	l->next->next = ft_lstnew(strdup("3"));
// 	expected = 3;
// 	actual = ft_lstsize(l);
// 	printf("actual: %d, expected: %d\n", actual, expected);
// 	return (0);
// }
