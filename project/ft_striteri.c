/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:02:51 by bmoretti          #+#    #+#             */
/*   Updated: 2023/10/12 18:28:35 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

// #include <stdio.h>
// #include <string.h>

// static void	ft_test(unsigned int i, char *c)
// {
// 	*c += (char)i;
// }

// int	main(void)
// {
// 	char	str[] = "42 is fun!!";
// 	char	*str0;

// 	str0 = strdup(str);
// 	ft_striteri(str0, &ft_test);
// 	printf("%s\n", str0);
// 	return (0);
// }
