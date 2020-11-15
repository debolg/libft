/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debolg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:24:02 by debolg            #+#    #+#             */
/*   Updated: 2020/11/15 14:19:46 by debolg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *pointer;

	pointer = (void *)malloc(count * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, count * size);
	return (pointer);
}
