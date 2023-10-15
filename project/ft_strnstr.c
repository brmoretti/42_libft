/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:08:46 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/15 17:23:23 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		k = i;
		while (big[k] == little[j] && k < len)
		{
			k++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// char *
// strnstr(s, find, slen)
// 	const char *s;
// 	const char *find;
// 	size_t slen;
// {
// 	char c, sc;
// 	size_t len;

// 	if ((c = *find++) != '\0') {
// 		len = strlen(find);
// 		do {
// 			do {
// 				if ((sc = *s++) == '\0' || slen-- < 1)
// 					return (NULL);
// 			} while (sc != c);
// 			if (len > slen)
// 				return (NULL);
// 		} while (strncmp(s, find, len) != 0);
// 		s--;
// 	}
// 	return ((char *)s);
// }

// int main(void)
// {
// 	char *big;
// 	char little[] = "";
// 	char *empty = (char*)"";
// 	size_t len = 0;
// 	char *ptr0;
// 	char *ptr1;

// 	big = empty;
// 	ptr0 = strnstr(big, little, len);
// 	ptr1 = ft_strnstr(big, little, len);
// 	printf("%s\n", ptr0);
// 	printf("%s\n", ptr1);
// 	return (0);
// }
