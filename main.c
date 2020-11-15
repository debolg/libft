/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:28:41 by debolg            #+#    #+#             */
/*   Updated: 2020/11/11 20:50:31 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

void	*ft_memset(void *mas, int simb, int count)
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

int		ft_isdigit(int ch)
{
	if (ch >= 48 && ch <= 57)
	{
		return (1);
	}
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	printf("%i\n", i);
	return (i);
}

int		main(void)
{
	char *str;

	str = "String for test";
	ft_strlen(str);
	return (0);
}
