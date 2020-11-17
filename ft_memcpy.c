/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:44:39 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 16:23:01 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t		i;
	const char	*psrc;
	char		*pdest;

	i = -1;
	psrc = src;
	pdest = dest;
	if (dest == 0 && src == dest)
		return (0);
	while (++i < size)
		*(pdest + i) = *(psrc + i);
	return (dest);
}
