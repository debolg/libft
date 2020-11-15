/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:29:58 by debolg            #+#    #+#             */
/*   Updated: 2020/11/14 22:07:24 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

void	*ft_memset(void *mas, int simb, size_t count);
int		ft_isdigit(int ch);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *sour, size_t count);
void	*ft_memccpy(void *dst, const void *src, int n, size_t count);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_strchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
int		ft_atoi(const char *str);

#endif
