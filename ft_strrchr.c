/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:08:11 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:08:14 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen((char *)s);
	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	while (i--)
		if (s[i] == c)
			return ((char *)s + i);
	return (0);
}
