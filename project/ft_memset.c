/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:18:33 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/16 12:01:55 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;

	i = -1;
	while (++i < n)
		((unsigned char *)s)[i] = (unsigned char)c;
	return (s);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*arr0;
// 	char	*arr1;

// 	arr0 = NULL;
// 	arr1 = NULL;
// 	// memset(arr0, 'a', 10);
// 	// arr0[9] = '\0';
// 	ft_memset(arr1, 'a', 10);
// 	// arr1[9] = '\0';
// 	printf("%s\n", arr0);
// 	// printf("%s\n", arr1);
// 	return (0);
// }
