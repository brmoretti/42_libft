/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:02:18 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/14 18:08:25 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (*src && size-- > 1)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (src_len);
}

// #include <string.h>
// #include <stdio.h>

//https://opensource.apple.com/source/xnu/xnu-4570.1.46/osfmk/
//arm/strlcpy.c.auto.html
// size_t	strlcpy(char * dst, const char * src, size_t maxlen) {
//     const size_t srclen = strlen(src);
//     if (srclen + 1 < maxlen) {
//         memcpy(dst, src, srclen + 1);
//     } else if (maxlen != 0) {
//         memcpy(dst, src, maxlen - 1);
//         dst[maxlen-1] = '\0';
//     }
//     return srclen;
// }

// int	main(void)
// {
// 	char	src[] = "42 is fun!!";
// 	char	dest0[20];
// 	char	dest1[20];
// 	size_t	size;

// 	size = 4;
// 	printf("%zu - %s\n", strlcpy(dest0, src, size), dest0);
// 	printf("%zu - %s\n", ft_strlcpy(dest1, src, size), dest1);
// 	return (0);
// }
