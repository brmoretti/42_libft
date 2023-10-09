/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:21:06 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/06 09:26:08 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	printf("%d\n", isdigit(argv[1][0]));
// 	printf("%d\n", ft_isdigit(argv[1][0]));
// 	return (0);
// }
