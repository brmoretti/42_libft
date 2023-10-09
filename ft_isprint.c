/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:52:35 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/06 09:57:25 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (16384);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	printf("%d\n", isprint(argv[1][0]));
// 	printf("%d\n", ft_isprint(argv[1][0]));
// 	return (0);
// }
