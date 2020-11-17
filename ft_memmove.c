/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:20:49 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 16:31:22 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t		i;
	const char	*psrc;
	char		*pdest;

	i = -1;
	psrc = src;
	pdest = dest;
	if (dest == 0 && src == dest)
		return (0);
	if (pdest < psrc)
		while (++i < size)
			pdest[i] = psrc[i];
	else
		while (size--)
			pdest[size] = psrc[size];
	return (dest);
}
