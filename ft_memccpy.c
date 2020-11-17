/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:59:07 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 16:23:10 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t		i;
	const char	*psrc;
	char		*pdest;

	i = -1;
	psrc = src;
	pdest = dest;
	if (!(size))
		return (0);
	while (++i < size && *pdest != c)
		*(pdest + i) = *(psrc + i);
	return (dest);
}
