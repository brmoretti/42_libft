/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:55:27 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 11:18:27 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*el0;
// 	t_list	*el_new;

// 	el0 = malloc(sizeof(t_list));
// 	el_new = malloc(sizeof(t_list));
// 	ft_lstadd_front(&el0, el_new);
// 	return (0);
// }
