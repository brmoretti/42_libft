/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:48:52 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/18 08:21:38 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*el;

	if (!lst || !f)
		return (NULL);
	el = ft_lstnew(f(lst->content));
	if (!el)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = el;
	lst = lst->next;
	while (lst)
	{
		el = ft_lstnew(f(lst->content));
		if (!el)
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, el);
	}
	return (new_lst);
}

// void	*ft_map(void *ct)
// {
// 	int		i;
// 	void	*c;
// 	char	*pouet;

// 	c = ct;
// 	i = -1;
// 	pouet = (char *)c;
// 	while (pouet[++i])
// 		if (pouet[i] == 'o')
// 			pouet[i] = 'a';
// 	return (c);
// }

// void	ft_del(void *content)
// {
// 	free(content);
// }

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	t_list		*list;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");
// 	int 		i;

// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);
// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	list = ft_lstmap(elem, &ft_map, &ft_del);
// 	i = 0;
// 	while (list)
// 	{
// 		printf("%s\n", (char *)list->content);
// 		list = list->next;
// 	}
// 	return (0);
// }

// #include <string.h>
// #include <stdio.h>

// void *		lstmap_f(void *content) {
// 	(void)content;
// 	return ("OK !");
// }

// void			lstdel_f(void *lst) {
// 	(void)lst;
// }

// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
// 	t_list *ret;

// 	l->next = ft_lstnew(strdup("ss"));
// 	l->next->next = ft_lstnew(strdup("-_-"));
// 	ret = ft_lstmap(l, lstmap_f, lstdel_f);
// 	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
// 		printf("OK!");
// 	else
// 		printf("NOK!");
// 	return (0);
// }
