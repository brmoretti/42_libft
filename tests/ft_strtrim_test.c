/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:05:32 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/09 18:10:25 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	str0[] = "@#)(42";
	char	str1[] = "@@@";
	char	str2[] = "42@@@";
	char	str3[] = "";
	char	str4[] = "@42@";
	char	set[] = "@#)(";
	char	*str;

	str = ft_strtrim(str0, set);
	printf("str0: %s\n", str);
	free (str);
	str = ft_strtrim(str1, set);
	printf("str1: %s\n", str);
	free (str);
	str = ft_strtrim(str2, set);
	printf("str2: %s\n", str);
	free (str);
	str = ft_strtrim(str3, set);
	printf("str3: %s\n", str);
	free (str);
	str = ft_strtrim(str4, set);
	printf("str4: %s\n", str);
	free (str);
	return (0);
}
