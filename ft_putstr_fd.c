/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:26:43 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/11 21:51:53 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s )
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}