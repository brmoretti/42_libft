/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:55:27 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/14 15:48:26 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !*lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	**lst;
// 	t_list	*el0;
// 	t_list	*el1;

// 	el0 = ft_lstnew("42");
// 	lst = &el0;
// 	el1 = ft_lstnew("43");
// 	ft_lstadd_front(lst, el1);
// 	printf("%s == %s\n", (char *)(*lst)->content, (char *)el1->content);
// 	printf("%s == 42\n", (char *)el0->next->content);
// 	return (0);
// }
