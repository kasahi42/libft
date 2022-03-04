/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:41:06 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 03:00:43 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*buf1, const void	*buf2, size_t	n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	b1 = (unsigned char *)buf1;
	b2 = (unsigned char *)buf2;
	i = 0;
	while (n > i)
	{
		if (*b1 != *b2)
			return ((int)(*b1 - *b2));
		b1++;
		b2++;
		i++;
	}
	return (0);
}
