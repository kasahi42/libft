/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:09:38 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 05:58:13 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	if (buf1 == NULL && buf2 == NULL)
		return (0);
	else if (buf1 == buf2 && n == 0)
		return (buf1);
	else if (buf1 < buf2)
		return (ft_memcpy(buf1, buf2, n));
	else
	{
		while (n--)
			((unsigned char *)buf1)[n] = ((unsigned char *)buf2)[n];
		return (buf1);
	}
}
