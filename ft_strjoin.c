/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 02:28:19 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/12 02:29:10 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
    int        ln1;
    int        ln2;
    char    *ss;
    int i;
    int j;

    j = 0;
    i = 0;
    if (!s1 || !s2)
        return NULL;
    ln1 = ft_strlen(s1);
    ln2 = ft_strlen(s2);
    ss = malloc((ln1 + ln2) * sizeof(char) + 1);
    if (!ss)
        return NULL;
    while (s1[i])
    {
        ss[i] = s1[i];
        i++;
    }
    while (s2[j])
    {ss[ln1 + j] = s2[j];
  j++;
      }
    ss[ln1 + ln2] = 0;
    return (ss);
}
