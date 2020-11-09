/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:28:41 by debolg            #+#    #+#             */
/*   Updated: 2020/11/09 21:20:17 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

void	*ft_memset(void *mas, int simb, int count)
{
	unsigned char	*s;
	unsigned char	z;
//	int				x;

	s = (unsigned char *) mas;
	z = (unsigned char) simb;
//	x = 0;
	printf("count = %i\n", count);
	while (count--)
	{
		write(1, "****\n", 5);
		printf("1 \n");
		*(s++) = (char)z;
//		*(s++) = simb;
		printf("2");
//		x++;
	}
//	printf("%c\n", *s);
	return (s);
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

int		main()
{
	char *str;

	str = "string for test";
//	ft_isdigit(50);
	ft_memset(str, '2', 3);

	return (0);
}
