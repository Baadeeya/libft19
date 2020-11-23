/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:54:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/23 15:35:02 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;
	size_t	ret;

	i = 0;
	if (ft_strlen(dst) < dstsize)
		ret = ft_strlen(src) + ft_strlen(dst);
	else
		ret = ft_strlen(src) + dstsize;
	while (dst[i++] && dstsize)
		dstsize--;
	i--;
	x = -1;
	while (src[++x] && x < dstsize - 1 && dstsize)
		dst[x] = src[x];
	if (dstsize)
		dst[x] = 0;
	return (ret);
}
