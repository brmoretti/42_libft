/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:41:42 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/16 12:04:38 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while ((*s1 || *s2) && (n-- > 0))
	{
		if (*(s1++) != *(s2++))
			return (*(unsigned char *)(--s1) - *(unsigned char *)(--s2));
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "test\200";
// 	char str2[] = "test\0";
// 	int n = 6;

// 	printf("str1: %s\nstr2: %s\nn: %d\n", str1, str2, n);
// 	printf("strncmp: %d\n", strncmp(str1, str2, n));
// 	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
// 	return (0);
// }
