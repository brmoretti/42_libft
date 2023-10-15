/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:44:21 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/15 12:21:26 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*occ;

	occ = NULL;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s++ == (char)c)
			occ = (char *)(s - 1);
	}
	if (!c)
		occ = (char *)(s);
	return (occ);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s = "";
// 	char c = '\0';

// 	printf("%s\n", strrchr(s, c));
// 	printf("%s\n", ft_strrchr(s, c));
// 	return (0);
// }
