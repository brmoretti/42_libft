/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:43:09 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/08 22:07:17 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n-- != 0)
		*(ptr++) = '\0';
}

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
