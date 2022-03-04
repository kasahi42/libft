/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:55:11 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 03:53:29 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*ptr;
	size_t	count;

	if (s == NULL)
		return (NULL);
	else if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (0);
	ft_memset(ptr, 0, len + 1);
	count = 0;
	while (s[start + count] != '\0' && len > count)
	{
		ptr[count] = s[start + count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
