/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:39:41 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/06 09:51:09 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	printf("%d\n", isascii((int)argv[1][0]));
// 	printf("%d\n", ft_isascii((int)argv[1][0]));
// 	return (0);
// }
