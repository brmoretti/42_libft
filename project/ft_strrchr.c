/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:44:21 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/13 14:30:08 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*occ;

	occ = NULL;
	while (s && *s)
	{
		if (*s++ == (char)c)
			occ = (char *)(s - 1);
	}
	return (occ);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s = "Hello World";
// 	char c = 'o';

// 	printf("%s\n", strrchr(s, c));
// 	printf("%s\n", ft_strrchr(s, c));
// 	return (0);
// }
