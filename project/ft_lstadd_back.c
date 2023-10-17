/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:29:10 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/17 14:42:59 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*el;

	if (!new)
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	t_list	*l = ft_lstnew(strdup("nyacat"));
// 	t_list	*n = ft_lstnew(strdup("OK"));

// 	ft_lstadd_back(&l, n);
// 	if (l->next == n && !strcmp(l->next->content, "OK"))
// 		printf("OK\n");
// 	else
// 		printf("NOK\n");
// 	return (0);
// }
