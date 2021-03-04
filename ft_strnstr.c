/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:31:50 by dgutin            #+#    #+#             */
/*   Updated: 2021/03/04 15:02:44 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	char	*a;
	char	*f;

	i = -1;
	a = (char *)needle;
	f = (char *)haystack;
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

int	main(void)
{
	size_t len = 11;
	const char needle[] = "les";
	const char haystack[] = "salut les amis";

	printf("n = %s -- h = %s -- ret =  %s\n" needle, haystack, ft_strnstr(haystack, needle, len));
}
