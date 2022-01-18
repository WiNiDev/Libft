/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:03:42 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/08 17:22:30 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*li;	

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	li = ft_lstlast(*alst);
	li->next = new;
}
