/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:09:14 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/08 20:36:32 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	try;

	i = 0;
	j = 0;
	try = 0;
	while (dst[i] != '\0')
		i++;
	while (src[try] != '\0')
		try++;
	if (size <= i)
		try += size;
	else
		try += i;
	while (src[j] != '\0' && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (try);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dst0[20] = "Hello";
// 	char src0[20] = "World";
// 	char dst1[20] = "Hello";
// 	char src1[20] = "World";
// 	size_t size = 20;

// 	printf("%zu - %s\n", strlcat(dst0, src0, size), dst0);
// 	printf("%zu - %s\n", ft_strlcat(dst1, src1, size), dst1);
// 	return (0);
// }
