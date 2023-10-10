/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:04:29 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/09 19:09:43 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char					buffer[10];
	long unsigned int		i;

	memset(buffer, 1, sizeof(buffer));
	ft_bzero(buffer, sizeof(buffer));
	i = 0;
	while (i < sizeof(buffer))
	{
		if (buffer[i++] != 0) {
			printf("ft_bzero did not work correctly.\n");
			return (1);
		}
	}
	printf("ft_bzero worked correctly.\n");
	return (0);
}
