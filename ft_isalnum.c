/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:26:43 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/06 09:36:32 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (
		('0' <= c && c <= '9') || ('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		return (8);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	printf("%d\n", isalnum(argv[1][0]));
// 	printf("%d\n", ft_isalnum(argv[1][0]));
// 	return (0);
// }
