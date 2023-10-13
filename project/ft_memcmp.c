/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:25:59 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 12:10:29 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if ((!s1 && !s2) || n == 0)
		return (0);
	else if (!s1)
		return (-(*(unsigned char *)s2));
	else if (!s2)
		return (*(unsigned char *)s1);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (--n)
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
// 	char	str1[] = "42 is fun!!";
// 	char	str2[] = "42 is fun!!";
// 	size_t	size = 4;
// 	int		ptr0;
// 	int		ptr1;

// 	ptr0 = memcmp(str1, str2, size);
// 	ptr1 = ft_memcmp(str1, str2, size);
// 	printf("%d\n", ptr0);
// 	printf("%d\n", ptr1);
// 	return (0);
// }
