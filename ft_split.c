/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <dgutin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:16:18 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/19 14:29:29 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_separator(char const *s, char *c)
{
	while (*c)
		if (*s == *c++)
			return (1);
	return (0);
}

int		ft_strleng(char const *s, char *c)
{
	int		i;

	i = 0;
	while (s[i] && !ft_is_separator(s + i, c))
		i++;
	return (i);
}

int		ft_malloc(const char *s, char *c)
{
	int		i;
	int		word;

	word = 0;
	while (*s)
	{
		while (*s && ft_is_separator(s, c))
			s++;
		i = ft_strleng(s, c);
		s += i;
		if (i)
			word++;
	}
	return (word);
}

char	*ft_strdupp(char *src, int w)
{
	char	*dest;

	if (!(dest = malloc((w + 1) * sizeof(char))))
		return (NULL);
	dest[w] = '\0';
	while (w--)
		dest[w] = src[w];
	return (dest);
}

char	**ft_split(char *s, char *c)
{
	char	**arr;
	int		i;
	int		w;
	int		len;

	len = ft_malloc(s, c);
	if (!(arr = malloc((len + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (*s && ft_is_separator(s, c))
			s++;
		w = ft_strleng(s, c);
		if (!(arr[i] = ft_strdupp(s, w)))
			return (NULL);
		s += w;
	}
	arr[len] = 0;
	return (arr);
}
