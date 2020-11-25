/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:39:50 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/25 16:42:57 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(int n)
{
	unsigned int	i;

	i = 0;
	if (!(n))
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long			i;
	unsigned long	nb;
	char			*str;
	int				neg;

	nb = n;
	neg = 0;
	if (n < 0)
	{
		nb *= -1;
		neg = 1;
	}
	i = ft_count(n);
	if (!(str = (char*)malloc(sizeof(char) * (ft_count(n) + 1))))
		return (NULL);
	str[i] = '\0';
	if (n < 0)
		str[0] = '-';
	while (i-- > neg)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
