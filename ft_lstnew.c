/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:47:31 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/10 19:05:15 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
		{
			list->content = content;
			list->next = NULL;
		}
	return (list);
}
