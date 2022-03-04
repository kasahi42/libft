/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:38:19 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 03:47:22 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_n(int	n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_strdup("0"));
}

size_t	check_digit(int	n)
{
	size_t				digit;

	if (n < 0)
		n = n * -1;
	digit = 0;
	while (n > 0)
	{
		n = n / 10;
		digit ++;
	}
	return (digit);
}

size_t	pow_of_ten(size_t	n)
{
	size_t	result;

	result = 1;
	while (n > 0)
	{
		result = result * 10;
		n --;
	}
	return (result);
}

char	*ft_itoa(int	n)
{
	char	*result;
	size_t	digit;
	size_t	i;

	if (n == -2147483648 || n == 0)
		return (check_n(n));
	digit = check_digit(n);
	result = malloc(sizeof(char) * (digit + 1));
	if (result == NULL)
		return (0);
	i = 0;
	if (n < 0)
	{
		result[i++] = '-';
		n = n * -1;
	}
	while (digit > 0)
	{
		result[i] = n / pow_of_ten(digit - 1) + '0';
		n = n % pow_of_ten(digit - 1);
		i ++;
		digit --;
	}
	result[i] = '\0';
	return (result);
}
