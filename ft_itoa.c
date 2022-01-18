/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:40:06 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/06 13:32:10 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_len(long long int n)
{
	int				count;
	unsigned int	res;

	res = n;
	count = 1;
	if (n < 0)
	{
		res = -n;
		count++;
	}
	while (res >= 10)
	{
		res /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	res;
	int				i;

	ptr = malloc((sizeof(char) * calc_len(n)) + 1);
	if (!ptr)
		return (NULL);
	i = calc_len(n);
	res = n;
	if (n < 0)
	{
		ptr[0] = '-';
		res = -n;
	}
	if (n == 0)
		ptr[i - 1] = '0';
	while (res)
	{
		i--;
		ptr[i] = res % 10 + '0';
		res /= 10;
	}
	ptr[calc_len(n)] = '\0';
	return (ptr);
}
