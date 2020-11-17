/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <dgutin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:04:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 18:32:38 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	while (*src && src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
