/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:29:35 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/16 19:08:42 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	void	freed(char **spl, int a)
{
	while (a >= 0)
	{
		free(spl[a]);
		a--;
	}
	free(spl);
	spl = NULL;
}

static	int	rows(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	if (s[i - 1] == c && j != 0)
		j++;
	return (j);
}

static	char	**aloca(char **spl, const char *s, char c)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		spl[a] = malloc(j * sizeof(char) + 1);
		if (!spl[a])
		{
			freed(spl, a);
			return (NULL);
		}
		a++;
		j = 0;
	}
	return (spl);
}

static	char	**fill(char **spl, const char *s, char c)
{
	int	i;
	int	j;
	int	a;

	a = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		ft_strlcpy(spl[a], s + (i - j), j + 1);
		a++;
		j = 0;
	}
	if (s[i - 1] == c && a != 0)
		a--;
	spl[a] = 0;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		a;
	char	**spl;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	a = rows(s, c);
	if (a == 0)
	{
		spl = malloc(sizeof(char *));
		spl[0] = NULL;
		return (spl);
	}
	spl = malloc(a * sizeof(char *));
	if (spl == NULL)
		return (NULL);
	spl = aloca(spl, s, c);
	if (!spl)
		return (NULL);
	spl = fill(spl, s, c);
	return (spl);
}
