/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:31:54 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 03:48:57 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char	(*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (s == NULL || f == NULL)
		return (0);
	result = ft_strdup(s);
	if (result == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i ++;
	}
	result[i] = '\0';
	return (result);
}
