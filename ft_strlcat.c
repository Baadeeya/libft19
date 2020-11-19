/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:54:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/19 11:59:31 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	len;

	i = -1;
	x = 0;
	len = 0;
	while (dest[++i])
		len++;
	if (size < len || size == 0)
		return (0);
	while (x < size - len - 1)
		dest[i++] = src[x++];
	dest[i] = '\0';
	return (len + ft_strlen(src));
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

