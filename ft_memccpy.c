/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:26:07 by debolg            #+#    #+#             */
/*   Updated: 2020/11/11 20:01:45 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int n, size_t count)
{
	unsigned char	*bufout;
	unsigned char	*bufin;
	unsigned char	simb;

	simb = (unsigned char)n;
	bufout = (unsigned char *)src;
	bufin = (unsigned char *)dst;
	while (count--)
	{
		*(bufin++) = *(bufout++);
		if (*(bufin - 1) == simb)
			return (bufin);
	}
	return (NULL);
}
