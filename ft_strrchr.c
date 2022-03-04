/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 03:45:24 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 08:47:40 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	size_t	count;
	char	tmp_c;

	tmp_c = (char)c;
	count = ft_strlen(s);
	while (count > 0)
	{
		if (s[count] == tmp_c)
			return ((char *)s + count);
		count --;
	}
	if (s[0] == tmp_c)
		return ((char *)s + count);
	else
		return (0);
}
