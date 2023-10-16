/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:25:59 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/16 13:13:56 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*(ptr1++) != *(ptr2++))
			return (*(ptr1 - 1) - *(ptr2 - 1));
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "44 is fun";
// 	char	str2[] = "42 is fun";
// 	size_t	size = 2;
// 	int		n0;
// 	int		n1;

// 	n0 = memcmp(str1, str2, size);
// 	n1 = ft_memcmp(str1, str2, size);
// 	printf("%d\n", n0);
// 	printf("%d\n", n1);
// 	return (0);
// }
