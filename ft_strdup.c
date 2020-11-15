/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:40:03 by debolg            #+#    #+#             */
/*   Updated: 2020/11/15 14:18:58 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	int		len;
	int		x;

	len = ft_strlen(s1);
	pointer = (char *)malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	x = 0;
	while (s1[x])
	{
		pointer[x] = s1[x];
		x++;
	}
	pointer[x] = 0;
	return (pointer);
}
