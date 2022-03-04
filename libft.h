/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasahi <kasahi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:03:48 by kasahi            #+#    #+#             */
/*   Updated: 2022/03/03 03:40:05 by kasahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha(int	x);
int		ft_isdigit(int	x);
int		ft_isalnum(int	x);
int		ft_isascii(int	x);
int		ft_isprint(int	x);
size_t	ft_strlen(const char	*x);
void	*ft_memset(void	*buf, int ch, size_t	n);
void	ft_bzero(void	*str, size_t	n);
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
void	*ft_memmove(void	*buf1, const void	*buf2, size_t n);
size_t	ft_strlcpy(char	*str1, const char	*str2, size_t size);
size_t	ft_strlcat(char	*str1, const char	*str2, size_t size);
int		ft_toupper(int	c);
int		ft_tolower(int	c);
char	*ft_strchr(const char	*s, int	c);
char	*ft_strrchr(const char	*s, int	c);
int		ft_strncmp(const char	*s1, const char	*s2, size_t	n);
void	*ft_memchr(const void	*buf, int	c, size_t	n);
int		ft_memcmp(const void	*s1, const void	*s2, size_t	n);
char	*ft_strnstr(const char	*s1, const char	*s2, size_t	n);
int		ft_atoi(const char	*s);
void	*ft_calloc(size_t	num, size_t	size);
char	*ft_strdup(const char	*s1);
char	*ft_substr(char const	*s, unsigned int	start, size_t	len);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_strtrim(char const	*s1, char const	*set);
char	**ft_split(char const	*s, char	c);
char	*ft_itoa(int	n);
char	*ft_strmapi(char const	*s, char	(*f)(unsigned int, char));
void	ft_striteri(char	*s, void	(*f)(unsigned int, char	*));
void	ft_putchar_fd(char	c, int	fd);
void	ft_putstr_fd(char	*s, int	fd);
void	ft_putendl_fd(char	*s, int	fd);
void	ft_putnbr_fd(int	n, int	fd);

#endif
