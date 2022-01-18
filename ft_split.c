/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberthoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:23:24 by mberthoi          #+#    #+#             */
/*   Updated: 2021/11/08 15:15:20 by mberthoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	count_line(char const *s, char c)
{
	int	i;
	int	j;
	int	e;

	i = 0;
	j = 0;
	e = 0;
	while (s[e])
	{
		while (s[e] == c)
			e++;
		i = check_len(s + e, c);
		e += i;
		if (i)
			j++;
	}
	return (j);
}

static char	*ft_dupsplit(const char *s, int e, char **res)
{
	char	*cpy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cpy = malloc((sizeof(char) * e) + 1);
	if (!cpy)
	{
		while (res[j] != NULL)
		{
			free(res[j]);
			j++;
		}
		return (NULL);
	}
	while (i < e && s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		taille;
	int		e;

	if (!s)
		return (NULL);
	taille = count_line(s, c);
	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * (taille + 1));
	if (!res)
		return (NULL);
	while (i < taille)
	{
		while (s[j] == c)
			j++;
		e = check_len(s + j, c);
		res[i] = ft_dupsplit(s + j, e, res);
		j += e;
		i++;
	}
	res[i] = NULL;
	return (res);
}
