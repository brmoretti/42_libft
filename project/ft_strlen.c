/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 22:26:54 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/12 22:22:23 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "";
// 	size_t	size0;
// 	size_t	size1;

// 	size0 = strlen(str);
// 	size1 = ft_strlen(str);
// 	printf("strlen: %zu\n", size0);
// 	printf("ft_strlen: %zu\n", size1);
// 	return (0);
// }
