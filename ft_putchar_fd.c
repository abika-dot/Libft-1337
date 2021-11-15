/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:24:56 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/09 13:13:45 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}