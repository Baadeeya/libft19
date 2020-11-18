/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:54:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/18 12:06:56 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = ft_strlen(dest);
	x = 0;
	if 
	while (src[x] && x < size - 1 && dest[i])
		dest[i++] = src[x++];
	dest[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}
