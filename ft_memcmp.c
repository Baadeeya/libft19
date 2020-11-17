/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:57:55 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 18:22:23 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)p1;
	s2 = (unsigned char*)p2;
	i = 0;
	if (!(size))
		return (0);
	while (i < size && s1[i] == s2[i])
		i++;
	if (i == size)
		i--;
	return (s1[i] - s2[i]);
}
