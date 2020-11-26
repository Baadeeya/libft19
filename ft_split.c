/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <dgutin@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:16:18 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/26 14:46:48 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_separator(char const *s, char c)
{
	if (*s == c)
		return (1);
	return (0);
}

int		ft_strleng(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && !ft_is_separator(s + i, c))
		i++;
	return (i);
}

int		ft_malloc(const char *s, char c)
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

char	**ft_free(char **str)
{
	int		i;

	i = 0;
	while (str[i++])
	{
		free(str[i]);
		str[i] = NULL;
	}
	free(str);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		i;
	int		w;
	int		len;

	if (!s)
		return (NULL);
	len = ft_malloc(s, c);
	if (!(arr = malloc((len + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (*s && ft_is_separator(s, c))
			s++;
		w = ft_strleng(s, c);
		if (!(arr[i] = ft_substr(s, 0, w)))
			return (ft_free(arr));
		s += w;
	}
	arr[len] = 0;
	return (arr);
}
