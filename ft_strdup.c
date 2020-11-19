/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <dgutin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:04:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/19 14:32:08 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	while (*s1 && s1)
		dest[i++] = *s1++;
	dest[i] = '\0';
	return (dest);
}
