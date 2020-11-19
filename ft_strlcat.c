/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:54:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/19 16:46:28 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;
	size_t	ret;

	i = 0;
	if (ft_strlen(dst) < dstsize)
		ret = ft_strlen(src) + ft_strlen(dst);
	else
		ret = ft_strlen(src) + dstsize;
	while (dst[i++] && dstsize)
		dstsize--;
	i--;
	x = -1;
	while (src[++x] && x < dstsize - 1 && dstsize)
		dst[x] = src[x];
	if (dstsize)
		dst[x] = 0;
	return (ret);
}
/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	const char	src1[] = " les amis!";
	char		dest1[26] = "Salut,";
	size_t		size1 = 10;

	const char	src2[] = " les amis!";
	char		dest2[26] = "Salut,";
	size_t		size2 = 10;


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
*/
