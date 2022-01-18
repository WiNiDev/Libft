/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:48:48 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/08 16:24:52 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*li;

	if (!*lst)
		return ;
	while (*lst)
	{
		li = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = li;
	}
	*lst = NULL;
}
