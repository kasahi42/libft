/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:56:53 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 05:21:30 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *str1, const char *str2, size_t	size)
{
	size_t	len_str1;
	size_t	i;

	if (size == 0)
		return (ft_strlen(str2));
	else if (str1 == NULL || str2 == NULL)
		return (ft_strlen(str1) + ft_strlen(str2));
	i = 0;
	len_str1 = ft_strlen(str1);
	while ((len_str1 + i < size - 1) && (str2[i] != '\0'))
	{
		str1[len_str1 + i] = str2[i];
		i++;
	}
	str1[len_str1 + i] = '\0';
	if (size > len_str1)
		return (len_str1 + ft_strlen(str2));
	else
		return (size + ft_strlen(str2));
}
