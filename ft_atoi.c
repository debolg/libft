/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:02:39 by debolg            #+#    #+#             */
/*   Updated: 2020/11/15 16:39:38 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	long long int	result;
	long long int	midres;
	int				znak;

	result = 0;
	znak = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		znak = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		midres = result;
		result = result * 10 + (*str++ - '0') * znak;
		if ((result < midres && znak == 1) || (result > midres && znak == -1))
			return (znak == 1 ? -1 : 0);
	}
	return ((int)result);
}
