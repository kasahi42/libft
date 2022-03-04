/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:25:50 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 02:52:05 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*tmp;

	tmp = (void *)malloc(num * size);
	if (tmp == NULL)
		return (0);
	ft_memset(tmp, 0, size * num);
	return (tmp);
}
