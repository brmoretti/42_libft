/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:58:22 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 14:29:28 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_is_in(const char c, char const *set)
{
	while (*set)
		if (*(set++) == c)
			return (1);
	return (0);
}

static char	*ft_while_in_set(char const *ptr_init, char const *set, int dir)
{
	char	*ptr;

	ptr = (char *)ptr_init;
	while (ft_is_in(*ptr, set))
		ptr += dir;
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*mover;
	char			*start;
	char			*end;
	char			*str;
	unsigned int	i;

	if (!s1 || !set)
		return (s1);
	start = ft_while_in_set(s1, set, 1);
	mover = start;
	while (*mover)
		mover++;
	end = ft_while_in_set(--mover, set, -1);
	if (end <= start)
		str = malloc(1);
	else
		str = malloc((size_t)(end - start) + 2);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = *(start++);
	str[i] = '\0';
	return (str);
}
