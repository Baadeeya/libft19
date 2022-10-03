/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:06:31 by dagutin           #+#    #+#             */
/*   Updated: 2022/10/03 13:06:36 by dagutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	while (s[++i])
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
