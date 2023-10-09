/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:01:30 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/06 09:20:18 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1024);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	printf("%d\n", isalpha(argv[1][0]));
// 	printf("%d\n", ft_isalpha(argv[1][0]));
// 	return (0);
// }
