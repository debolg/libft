/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:57:34 by debolg            #+#    #+#             */
/*   Updated: 2020/11/15 13:59:01 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *sour, size_t count)
{
	unsigned char	*bufout;
	unsigned char	*bufin;
	int				i;

	bufout = (unsigned char *)sour;
	bufin = (unsigned char *)dest;
	i = 0;
	if (dest == NULL && sour == NULL)
		return (NULL);
	while (count--)
	{
		*(bufin + i) = *(bufout + i);
		i++;
	}
	return (dest);
}
