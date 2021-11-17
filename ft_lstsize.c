/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:39:21 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/11 00:12:23 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
int ft_lstsize(t_list *lst)
{
	int count;
	t_list	*tmp;

	tmp = lst;
	count = 0;
   while (tmp != NULL)
   {
	   tmp = tmp->next;
	   count++;
   }	   
   return count;
}
