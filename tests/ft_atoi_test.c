/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:08:08 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/09 19:13:13 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	char str[] = "  \n\t42 is fun!!";
	int ptr0;
	int ptr1;

	ptr0 = atoi(str);
	ptr1 = ft_atoi(str);
	printf("%d\n", ptr0);
	printf("%d\n", ptr1);
	return (0);
}
