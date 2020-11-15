/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:55:27 by debolg            #+#    #+#             */
/*   Updated: 2020/11/14 20:19:56 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	simb;
	int		len;

	len = 0;
	simb = (char)c;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == simb)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
