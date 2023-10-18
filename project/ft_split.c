/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:20:44 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/18 08:03:16 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_tokens(char const *s, char c)
{
	unsigned int	count;

	count = 1;
	if (!*s)
		return (0);
	while (*s == c)
		s++;
	while (*s)
	{
		if (*(s++) == c)
		{
			count++;
			while (*s == c)
				s++;
		}
	}
	if (*(s - 1) == c && count >= 1)
		count--;
	return (count);
}

static char	*ft_split_malloc(char *start, char c)
{
	unsigned int	i;
	char			*str;

	while (*start == c)
		start++;
	i = -1;
	while (start[++i])
	{
		if (start[i] == c)
		{
			str = malloc(i + 1);
			if (str == NULL)
				return (NULL);
			return (str);
		}
	}
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

static char	*ft_copy_split(char *dest, char *src, char c)
{
	while (*src && *src == c)
		src++;
	while (*src && *src != c)
		*(dest++) = *(src++);
	*dest = '\0';
	if (*src)
		return (src + 1);
	return (src);
}

static char	**ft_clear(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free (tab[i++]);
	free (tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*mover;
	unsigned int	i;
	unsigned int	n_tokens;

	if (!s)
		return (NULL);
	n_tokens = ft_count_tokens(s, c);
	tab = ft_calloc((size_t)n_tokens + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	mover = (char *)s;
	i = -1;
	while (++i < n_tokens)
	{
		tab[i] = ft_split_malloc(mover, c);
		if (tab[i] == NULL)
			return (ft_clear(tab));
		mover = ft_copy_split(tab[i], mover, c);
	}
	return (tab);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	str[] = "";
// 	char		c = 'z';
// 	char		**tab;

// 	if (!(tab = ft_split(str, c)))
// 		return (1);
// 	return (0);
// }
