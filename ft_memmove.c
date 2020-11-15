/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:03:18 by debolg            #+#    #+#             */
/*   Updated: 2020/11/15 13:55:22 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *bufout;
	unsigned char *bufin;

	bufout = (unsigned char *)src;
	bufin = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (bufin < bufout)
	{
		while (len--)
			*(bufin++) = *(bufout++);
	}
	else
	{
		bufin += len;
		bufout += len;
		while (len--)
			*(--bufin) = *(--bufout);
	}
	return (dst);
}
