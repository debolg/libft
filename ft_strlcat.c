/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 12:44:23 by debolg            #+#    #+#             */
/*   Updated: 2020/11/15 16:42:26 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char		*strout;
	const char		*strin;
	size_t			i;
	size_t			len;

	strout = src;
	strin = dst;
	i = dstsize;
	while (i-- != 0 && *dst)
		dst++;
	len = dst - strin;
	i = dstsize - len;
	if (i-- == 0)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (i != 0)
		{
			*dst++ = *src;
			i--;
		}
		src++;
	}
	*dst = '\0';
	return (len + (src - strout));
}
