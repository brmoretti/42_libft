/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:20:44 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/09 23:20:59 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static unsigned int	ft_count_c(char const *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		if (*(s++) == c)
			count++;
	}
	return (count);
}

static char	*ft_split_malloc(char *start, char c)
{
	unsigned int	i;
	char			*str;

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
	while (*src && *src != c)
		*(dest++) = *(src++);
	*dest = '\0';
	if (*src)
		return (src + 1);
	return (src);
}

static char	ft_allocation_failed(char **tab, unsigned int n)
{
	while (n)
		free (tab[--n]);
	free (tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t			len;
	char			**tab;
	char			*mover;
	unsigned int	i;
	unsigned int	n_strings;

	n_strings = ft_count_c(s, c) + 1;
	tab = malloc((size_t)n_strings * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	mover = (char *)s;
	i = -1;
	while (++i < n_strings)
	{
		tab[i] = ft_split_malloc(mover, c);
		if (tab[i] == NULL)
			return (ft_allocation_failed(tab, i));
		mover = ft_copy_split(tab[i], mover, c);
	}
	return (tab);
}

// int	main(void)
// {
// 	char const	str[] = "42 is fun!!";
// 	char		c = " ";
// 	char		**tab;

// 	tab = ft_split(str, c);
// 	return (0);
// }
