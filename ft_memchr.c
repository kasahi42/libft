/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 02:03:08 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 03:23:31 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*buf, int c, size_t	n)
{
	unsigned char	*tmp_buf;
	unsigned char	tmp_c;
	size_t			i;

	tmp_buf = (unsigned char *)buf;
	tmp_c = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (tmp_buf[i] == tmp_c)
			break ;
		i ++;
	}
	if (n == i)
		return (0);
	else
		return ((void *)tmp_buf + i);
}
