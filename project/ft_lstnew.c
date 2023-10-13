/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:31:55 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 11:58:39 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		n;
// 	t_list	*el;

// 	n = 42;
// 	el = ft_lstnew(&n);
// 	printf("%d\n", *(int *)el->content);
// 	return (0);
// }
