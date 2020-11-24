/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:36:22 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/24 18:44:28 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (!(str = (char*)malloc((sizeof(char) * (ft_strlen(s) + 1)))))
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = (*f)(i, s[i]);
	str[i] = '\0';
	return (str);
}
