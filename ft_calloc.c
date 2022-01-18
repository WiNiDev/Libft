/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:22:26 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:30:46 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*s;
	void	*str;

	i = 0;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	s = (char *)str;
	while (i < (size * count))
	{
		s[i] = 0;
		i++;
	}
	return (str);
}
