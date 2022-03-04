/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:46:41 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 03:53:07 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (ptr == NULL)
		return (0);
	ptr[len_s1 + len_s2 + 1] = '\0';
	while (len_s2 + 1 > 0)
	{
		ptr[len_s1 + len_s2] = s2[len_s2];
		len_s2 --;
	}
	while (len_s1 > 0)
	{
		ptr[len_s1 + len_s2] = s1[len_s1 - 1];
		len_s1 --;
	}
	return (ptr);
}
