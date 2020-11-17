/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:32:57 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 16:56:26 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *pointer, int c, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		if (((const char*)pointer)[i] == (const char)c)
			return ((void*)pointer);
	return (0);
}
