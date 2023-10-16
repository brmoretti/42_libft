/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:08:19 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/16 13:12:49 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (to < from)
	{
		while (n-- > 0)
			*to++ = *from++;
	}
	else if (to > from)
	{
		while (n-- > 0)
			to[n] = from[n];
	}
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	str0[] = "0123456789";
// 	char	*str1;
// 	char	*src;
// 	char	*dst;
// 	size_t	n;

// 	str1 = malloc(20);
// 	strcpy(str1, str0);
// 	src = str1 + 3;
// 	dst = str1;
// 	n = 4;
// 	dst = ft_memmove(dst, src, n);
// 	printf("%s\n", dst);
// 	free (str1);
// 	return (0);
// }
