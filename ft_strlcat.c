/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:54:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/18 15:02:07 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	y;

	i = 0;
	y = 0;
	while (dest[y] && size > i++)
		y++;
	if (i <= size)
		return (i + ft_strlen(src));
	x = -1;
	while (src[++x])
		if (x < size - i - 1)
			dest[i++] = src[x];
	dest[i] = '\0';
	return (i + x);
}

#include <stdio.h>
#include <string.h>

int		main(void)
{
	const char	src1[] = " les amis!";
	char		dest1[26] = "Salut,";
	size_t		size1 = 4;

	const char	src2[] = " les amis!";
	char		dest2[26] = "Salut,";
	size_t		size2 = 4;


	printf("OR -- %s --", dest1);
	printf("%s -- ", src1);
	printf("%zu -- ", strlcat(dest1, src1, size1));
	printf("%s -- %s\n", dest1, src1);

	printf("FT -- %s --", dest2);
	printf("%s -- ", src2);
	printf("%zu -- ", ft_strlcat(dest2, src2, size2));
	printf("%s -- %s\n", dest2, src2);

	return (0);
}
