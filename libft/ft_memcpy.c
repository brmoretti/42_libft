/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:39:49 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 12:31:36 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;

	if (!dest || !src)
		return (dest);
	dest_cpy = (unsigned char *)dest;
	while (n-- > 0)
		*(dest_cpy++) = *((unsigned char *)src++);
	return (dest);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "42 is fun!!";
// 	char	dest0[20];
// 	char	dest1[20];
// 	size_t	size;

// 	size = 0;
// 	bzero(dest0, 20);
// 	bzero(dest1, 20);
// 	memcpy(dest0, str, size);
// 	ft_memcpy(dest1, str, size);
// 	printf("%s\n", dest0);
// 	printf("%s\n", dest1);
// 	return (0);
// }
