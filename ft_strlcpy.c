/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:37:47 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/19 14:54:25 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	x = 0;
	while (src[x])
		x++;
	if (dst == NULL || src == NULL)
		return (0);
	if (!(dstsize))
		return (x);
	i = -1;
	while (src[++i] && i < dstsize - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (x);
}
/*
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
	printf("%zu -- ", strlcpy(dest1, src1, size1));
	printf("%s -- %s\n", dest1, src1);
	
	printf("FT -- %s --", dest2);
	printf("%s -- ", src2);
	printf("%zu -- ", ft_strlcpy(dest2, src2, size2));
	printf("%s -- %s\n", dest2, src2);

	return (0);
}
*/
