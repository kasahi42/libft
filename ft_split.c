/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:16:26 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 08:46:51 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_split_error(char	**result, size_t	x)
{
	size_t	count;

	count = 0;
	while (x > count)
	{
		free(result[x]);
		count++;
	}
	free(result);
	return (0);
}

char	*ft_malloc_str(size_t	x, const char	*s, char	c)
{
	size_t	count_str;
	char	*tmp_array;

	if (!s[0])
		return (0);
	count_str = 0;
	while (s[count_str] != c && s[count_str] != '\0')
		count_str++;
	tmp_array = malloc(sizeof(char) * (count_str + 1));
	if (tmp_array == NULL)
		return (ft_split_error(&tmp_array, x));
	return (tmp_array);
}

size_t	ft_count_array(char const	*s, char	c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i ++;
		}
		else
		{
			count ++;
			while ((s[i] != c) && (s[i] != '\0'))
				i ++;
		}
	}
	return (count);
}

char	**ft_split(char const	*s, char	c)
{
	char	**result;
	size_t	count_array;
	size_t	x;
	size_t	j;

	if (s == NULL)
		return (0);
	count_array = ft_count_array(s, c);
	result = malloc(sizeof(char *) * (count_array + 1));
	if (result == NULL)
		return (0);
	x = 0;
	while (x < count_array)
	{
		while (*s == c)
			s++;
		result[x] = ft_malloc_str(x, s, c);
		j = 0;
		while (*s != c && *s != '\0')
			result[x][j++] = *s++;
		result[x][j] = '\0';
		x++;
	}
	result[count_array] = NULL;
	return (result);
}
