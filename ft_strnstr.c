/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:31:50 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/25 15:06:22 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	const char	*aiguille;
	const char	*foin;

	i = -1;
	aiguille = needle;
	foin = haystack;
	if (*needle == 0)
		return ((char *)haystack);
	while (++i <= len)
	{
		if (*aiguille == '\0')
			return ((char *)(foin - (aiguille - needle)));
		if (*foin == *aiguille)
			aiguille++;
		else
			aiguille = needle;
		if (*foin == '\0')
			break ;
		foin++;
	}
	return (0);
}
