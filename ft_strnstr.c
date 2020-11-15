/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 13:48:32 by debolg            #+#    #+#             */
/*   Updated: 2020/11/15 15:18:35 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	x;
	int lenn;

	x = 0;
	lenn = ft_strlen(needle);
	if (lenn == 0 || needle == NULL)
		return ((char *)haystack);
	while (*haystack && len >= lenn)
	{
		x = ft_strncmp(haystack, needle, lenn);
		if (x == 0)
			return ((char *)haystack);
		else
		{
			len--;
			haystack++;
		}
	}
	return (NULL);
}
