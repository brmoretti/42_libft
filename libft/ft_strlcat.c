/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:09:14 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/15 13:24:33 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strnlen(dst, size);
	if (len == size)
		return (len + ft_strlen(src));
	return (len + ft_strlcpy(dst + len, src, size - len));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*dest;
// 	size_t	ret;

// 	dest = (char *)malloc(sizeof(*dest) * 15);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	dest[14] = 'a';
// 	ret = strlcat(dest, "lorem ipsum dolor sit amet", 15);
// 	printf("%zu - %s\n", ret, dest);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	dest[14] = 'a';
// 	ret = ft_strlcat(dest, "lorem ipsum dolor sit amet", 15);
// 	printf("%zu - %s\n", ret, dest);
// }
