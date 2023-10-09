/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:02:18 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/06 14:56:50 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	unsigned long	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	if (size > 0)
	{
		src_len = ft_strlen(src);
		while (*src && size-- > 1)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (src_len);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "abcdefg";
	//char	dest0[20];
	char	dest1[20];
	size_t	size;

	size = 4;
	//printf("%d - %s\n", strlcpy(dest0, src, size), dest0);
	printf("%zu - %s\n", ft_strlcpy(dest1, src, size), dest1);
	return (0);
}
