/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:08:46 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/08 20:40:05 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		k = i;
		while (big[k] == little[j] && k < len)
		{
			k++;
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char big[] = "42 is fun!!";
// 	char little[] = "is";
// 	size_t len = 4;
// 	char *ptr0;
// 	char *ptr1;

// 	//ptr0 = strnstr(big, little, len);
// 	ptr1 = ft_strnstr(big, little, len);
// 	printf("%s\n", ptr0);
// 	printf("%s\n", ptr1);
// 	return (0);
// }
