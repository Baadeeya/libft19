/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:02:34 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/25 14:20:48 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_set(char const s1, char const *set)
{
	while (*set)
		if (s1 == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	x = ft_strlen(s1) - 1;
	while (ft_is_set(s1[x], set))
		x--;
	return (ft_substr(s1, i, x - i + 1));
}
