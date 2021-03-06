/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:14:19 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 02:20:52 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int	x)
{
	if (('A' <= x && x <= 'Z') || ('a' <= x && x <= 'z'))
		return (1);
	else
		return (0);
}
