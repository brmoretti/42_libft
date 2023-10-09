/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:18:33 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/06 11:29:52 by bmoretti         ###   ########.fr       */
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
// 	char	arr0[10];
// 	char	arr1[10];

// 	memset(arr0, 'a', sizeof(arr0));
// 	arr0[9] = '\0';
// 	ft_memset(arr1, 'a', sizeof(arr1));
// 	arr1[9] = '\0';
// 	printf("%s\n", arr0);
// 	printf("%s\n", arr1);
// 	return (0);
// }
