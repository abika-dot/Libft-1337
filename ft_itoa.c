/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:39:12 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/16 19:21:44 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	char	*nbr(char *s, long nbr, int i, int sign)
{
	int		a;
	int		b;
	long	c;

	a = i + 1;
	c = nbr;
	if (sign == -1)
	{
		s[0] = '-';
		c *= -1;
	}
	while (c)
	{
		b = c % 10;
		c = c / 10;
		s[i] = b + 48;
		i--;
	}
	s[a] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*at;
	int		c;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	c = n;
	if (c == 0)
		return (zerorule());
	while (c)
	{
		c = c / 10;
		i++;
	}
	if (n < 0)
	{
		i++;
		sign *= -1;
	}
	at = malloc(i * sizeof(char) + 1);
	if (!at)
		return (NULL);
	at = nbr(at, (long)n, i - 1, sign);
	return (at);
}
