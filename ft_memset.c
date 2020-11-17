/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:54:21 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/17 12:30:25 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *pointer, int value, size_t count)
{
	unsigned int *ptr;

	ptr = pointer;
	while (count-- > 0)
		*ptr = value;
	return (pointer);
}
