/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:48:07 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 02:24:15 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t	n)
{
	unsigned char	*ptr;
	unsigned char	tmp;

	ptr = buf;
	tmp = ch;
	while (n--)
	{
		*ptr = tmp;
		ptr++;
	}
	return (buf);
}
