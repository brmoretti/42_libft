/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoretti <bmoretti@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:24:51 by bmoretti          #+#    #+#             */
/*   Updated: 2023/11/14 10:17:05 by bmoretti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_atoi.c
 * @brief Implementation of the ft_atoi function.
 */

/**
 * @brief Converts a string to an integer.
 *
 * This function converts the initial portion of the string pointed to by nptr
 * to its equivalent integer representation.
 *
 * @param nptr A pointer to the string to be converted.
 * @return The converted integer value.
 */
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
