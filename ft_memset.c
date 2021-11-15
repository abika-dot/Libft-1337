/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:56:55 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/09 13:13:25 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len)
	{
		*s = (unsigned char)c;
		len--;
		s++;
	}
	return (b);
}