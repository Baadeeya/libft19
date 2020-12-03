/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:31:50 by dgutin            #+#    #+#             */
/*   Updated: 2020/12/03 14:35:44 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	const char	*a;
	const char	*f;

	i = -1;
	a = needle;
	f = haystack;
	if (*needle == 0)
		return ((char *)haystack);
	while (++i <= len)
	{
		if (*a == '\0')
			return ((char *)(f - (a - needle)));
		if (*f == *a)
			a++;
		else
			a = needle;
		if (*f == '\0')
			break ;
		f++;
	}
	return (0);
}
