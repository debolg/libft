/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 09:03:58 by debolg            #+#    #+#             */
/*   Updated: 2020/11/14 09:56:45 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char num;

	num = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == num)
			return (str);
		str++;
	}
	return (NULL);
}
