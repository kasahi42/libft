/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:04:33 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 02:27:48 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const	void	*src, size_t	n)
{
	size_t				i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	while (n > i)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i ++;
	}
	return (dst);
}
