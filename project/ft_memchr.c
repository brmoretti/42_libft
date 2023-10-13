/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:09:20 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 12:02:20 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return ;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "42 is fun!!";
// 	char	c = '2';
// 	size_t	size = 4;
// 	char	*ptr0;
// 	char	*ptr1;

// 	ptr0 = memchr(str, c, size);
// 	ptr1 = ft_memchr(str, c, size);
// 	printf("%s\n", ptr0);
// 	printf("%s\n", ptr1);
// 	return (0);
// }
