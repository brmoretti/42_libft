/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:55:27 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/15 14:04:47 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	t_list		*begin;
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	char		*str = strdup("42 ");
// 	char		*str2 = strdup("is ");
// 	char		*str3 = strdup("fun");
// 	char		*str4 = strdup("!!");

// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);
// 	begin = NULL;
// 	ft_lstadd_front(&begin, elem4);
// 	ft_lstadd_front(&begin, elem3);
// 	ft_lstadd_front(&begin, elem2);
// 	ft_lstadd_front(&begin, elem);
// 	while (begin)
// 	{
// 		printf("%s\n", (char *)begin->content);
// 		begin = begin->next;
// 	}
// 	return (0);
// }
