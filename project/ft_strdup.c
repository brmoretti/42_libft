/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:42:46 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/08 22:23:07 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	while (s[i])
		i++;
	ptr = malloc(i + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (*s)
		ptr[i++] = *s++;
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	str[] = "42 is fun!!";
// 	char	*ptr0;
// 	char	*ptr1;

// 	ptr0 = strdup(str);
// 	ptr1 = ft_strdup(str);
// 	printf("strdup: %s\n", ptr0);
// 	printf("ft_strdup: %s\n", ptr1);
// 	return (0);
// }
