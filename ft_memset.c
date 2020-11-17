/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:54:21 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 16:22:52 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t len)
{
	unsigned char *ptr;

	ptr = pointer;
	while (len--)
		*ptr++ = (unsigned char)value;
	return (pointer);
}
