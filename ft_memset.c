/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:29:23 by debolg            #+#    #+#             */
/*   Updated: 2020/11/11 18:27:06 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mas, int simb, size_t count)
{
	unsigned char	*s;
	int				x;

	s = (unsigned char *)mas;
	x = 0;
	while (x != count)
	{
		*(s + x) = simb;
		x++;
	}
	return (mas);
}
