/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:56:00 by debolg            #+#    #+#             */
/*   Updated: 2020/11/14 09:59:57 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(const char *s, int c)
{
	unsigned char *str;
	unsigned char simb;

	simb = (unsigned char)c;
	str = (unsigned char *)s;
	while (*str && !(*str == simb))
		str++;
	if (*str == simb)
		return (str);
	else
		return (NULL);
}
