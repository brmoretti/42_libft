/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:24:51 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/16 13:13:22 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr && '0' <= *nptr && *nptr <= '9')
		nb = nb * 10 + (*(nptr++) - '0');
	return (sign * nb);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char str[] = "  \n\t42 is fun!!";
// 	int ptr0;
// 	int ptr1;

// 	ptr0 = atoi(str);
// 	ptr1 = ft_atoi(str);
// 	printf("%d\n", ptr0);
// 	printf("%d\n", ptr1);
// 	return (0);
// }
