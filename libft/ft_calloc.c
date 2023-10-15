/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:43:09 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/14 15:55:41 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (!nmemb || !size)
		total = 1;
	else
	{
		total = nmemb * size;
		if (total / nmemb != size)
			return (NULL);
	}
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// int	main(void)
// {
// 	int	*ptr0;
// 	int	*ptr1;
// 	size_t	nmemb = 0;

// 	ptr0 = calloc(nmemb, sizeof(int));
// 	ptr1 = ft_calloc(nmemb, sizeof(int));
// 	return (0);
// }
