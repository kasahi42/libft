/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:58:59 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 02:59:04 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	n)
{
	size_t	tmp_count_s1;
	size_t	count_s1;
	size_t	count_s2;

	if (*s2 == '\0')
		return ((char *)s1);
	count_s1 = 0;
	while ((n >= count_s1) && (*(s1 + count_s1) != '\0'))
	{
		if (*(s1 + count_s1) == *s2)
		{
			count_s2 = 0;
			tmp_count_s1 = count_s1;
			while (*(s1 + count_s1) == *(s2 + count_s2))
			{
				count_s1 ++;
				count_s2 ++;
				if (*(s2 + count_s2) == '\0' && n >= count_s1)
					return ((char *)s1 + tmp_count_s1);
			}
			count_s1 = tmp_count_s1;
		}
		count_s1 ++;
	}
	return (0);
}
