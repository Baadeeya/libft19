/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:06:01 by dgutin            #+#    #+#             */
/*   Updated: 2020/11/27 15:30:54 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	if (!f)
		return (lst);
	ptr = NULL;
	while (lst)
	{
		if (!(list = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&ptr, list);
		lst = lst->next;
	}
	return (ptr);
}
