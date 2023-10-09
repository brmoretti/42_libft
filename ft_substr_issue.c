/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_issue.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 22:24:11 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/08 23:05:18 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

static char	*ft_strdup(const char *s)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	unsigned int	len_s;

	len_s = (unsigned int)ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > (size_t)len_s - (size_t)start) //issue
		len = (size_t)len_s - (size_t)start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && s[start])
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

// 	ptr0 = ft_substr(str, 1, 4);
// 	ptr1 = ft_substr(str, 7, 7);
// 	printf("ft_substr: %s\n", ptr0);
// 	printf("ft_substr: %s\n", ptr1);
// 	return (0);
// }
