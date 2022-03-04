/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:46:51 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 04:01:49 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*str1, const char	*str2, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(str2));
	i = 0;
	while ((size - 1 > i) && (str2[i] != '\0'))
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (ft_strlen(str2));
}
