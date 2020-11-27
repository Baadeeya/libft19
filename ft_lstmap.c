/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:06:01 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/27 13:22:16 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*list;

	if (!lst || !del)
		return (NULL);
	if (!f)
		return (lst);
	if (!(list = ft_lstnew(lst->content)))
	{
		free(lst);
		return (NULL);
	}
	list = lst;
	ft_lstiter(list, (void*)(*f));
	return (list);
}
