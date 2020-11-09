/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:29:23 by debolg            #+#    #+#             */
/*   Updated: 2020/11/09 20:25:16 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mas, int simb, int count)
{
	unsigned char	*s;
//	unsigned char	ch;
	int				x;

	s = (unsigned char *)mas;
//	ch = (unsigned char)simb;
	x = 0;
	while (x != count)
	{
		*(unsigned char *)(s + x) = (unsigned char *)simb;
		x++;
	}
	return (s);
}
