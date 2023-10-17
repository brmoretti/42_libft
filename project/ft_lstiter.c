/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 10:45:27 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/17 15:21:59 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <string.h>
// #include <stdio.h>

// void			lstiter_f(void *content) {
// 	char *s = content;

// 	s[0] = 'O';
// 	s[1] = 'K';
// }

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup("KO !"));

// 	l->next = ft_lstnew(strdup("KO !"));
// 	l->next->next = ft_lstnew(strdup("KO !"));
// 	ft_lstiter(l, lstiter_f);
// 	if (!strcmp(l->content, "OK !") && !strcmp(l->next->content, "OK !") && !strcmp(l->next->next->content, "OK !"))
// 		printf("OK");
// 	else
// 		printf("NOK");
// 	return (0);
// }
