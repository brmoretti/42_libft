/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:25:57 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/10 15:11:51 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}

#include <stdio.h>

static char	ft_test(unsigned int i, char c)
{
	return (c + (char)i);
}

int	main(void)
{
	char	str[] = "42 is fun!!";

	printf("%s\n", ft_strmapi(str, &ft_test));
	return (0);
}
