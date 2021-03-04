/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <dgutin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:29:11 by dgutin            #+#    #+#             */
/*   Updated: 2021/03/04 16:14:48 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;

	i = 0;
	if (!(n = ft_strlen(needle)))
		return ((char *)haystack);
	while (haystack[i++] && n <= len--)
	{
		if (haystack[i] && !(ft_strncmp(&haystack[i], needle, n)))
			return ((char *)&haystack[i]);
	}
	return (NULL);
}
