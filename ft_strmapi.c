/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:28:03 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:35:04 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*cpy;
	char			c;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	cpy = malloc((sizeof(char) * i) + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		c = s[i];
		cpy[i] = f(i, c);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
