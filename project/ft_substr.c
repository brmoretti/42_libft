/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 22:24:11 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/14 15:48:26 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	unsigned int	len_s;

	len_s = (unsigned int)ft_strlen(s);
	if (start >= len_s)
		len = 0;
	else if ((size_t)start + len > (size_t)len_s)
		len = (size_t)len_s - (size_t)start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (start <= len_s && i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "42 is fun!!";
// 	char	*ptr0;
// 	char	*ptr1;
// 	char	*ptr2;

// 	ptr0 = ft_substr(str, 1, 4);
// 	ptr1 = ft_substr(str, 7, 7);
// 	ptr2 = ft_substr(str, 20, 7);
// 	printf("%s\n", ptr0);
// 	printf("%s\n", ptr1);
// 	return (0);
// }
