/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:14:01 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/08 18:25:25 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*li;
	t_list	*re;

	re = NULL;
	if (!lst && !f)
		return (NULL);
	while (lst)
	{
		li = ft_lstnew(f(lst->content));
		if (!li)
		{
			ft_lstclear(&re, del);
			return (NULL);
		}
		ft_lstadd_back(&re, li);
		lst = lst->next;
	}
	return (re);
}
