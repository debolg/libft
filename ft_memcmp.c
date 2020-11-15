/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 09:26:20 by debolg            #+#    #+#             */
/*   Updated: 2020/11/14 09:57:11 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *strout;
	unsigned char *strin;

	strout = (unsigned char *)s2;
	strin = (unsigned char *)s1;
	while (n--)
	{
		if (*strin < *strout)
			return (*strin - *strout);
		else if (*strin > *strout)
			return (*strin - *strout);
		strin++;
		strout++;
	}
	return (0);
}
