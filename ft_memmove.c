/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:32:18 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:33:10 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	i = 0;
	if (!dst && !src)
		return (0);
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (dst > src)
	{
		while (i < len)
		{
			ds[len - 1 - i] = sr[len - 1 - i];
			i++;
		}
	}
	else
	{
		i -= 1;
		while (++i < len)
			ds[i] = sr[i];
	}
	return (dst);
}
