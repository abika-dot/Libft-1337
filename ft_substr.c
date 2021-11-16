/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:22:01 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/16 18:39:31 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ss;
	unsigned int	i;
	unsigned int	sl;

	i = 0;
	if (!s)
		return (NULL);
	sl = ft_strlen(s);
	if (len > sl)
		len = sl;
	ss = malloc(len * sizeof(char) + 1);
	if (!ss)
		return (NULL);
	if (start > sl)
	{
		ss[0] = 0;
		return (ss);
	}
	while (s[start] && i < len)
	{
		ss[i] = s[start];
		start++;
		i++;
	}
	ss[i] = 0;
	return (ss);
}
