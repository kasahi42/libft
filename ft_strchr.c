/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 02:59:22 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 04:29:57 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	size_t	count;
	char	tmp_c;

	tmp_c = (char)c;
	if (tmp_c == '\0')
		return ((char *)(s + ft_strlen(s)));
	else
	{
		count = 0;
		while (s[count] != tmp_c)
		{
			if (s[count] == '\0')
				return (0);
			count++;
		}
		return ((char *)(s + count));
	}
}
