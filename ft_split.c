/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 03:06:00 by ozahir            #+#    #+#             */
/*   Updated: 2021/11/17 04:09:32 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
static void freed(char **spl)
{
  int i = 0;
    while (spl[i])
    {
        free(spl[i]);
        i++;
    }
    free(spl);
    spl = NULL;
}

static int rows(const  char *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;

        if (s[i] && s[i] != c)
            j++;
        while (s[i] &&s[i] != c)
            i++;
    }
  j++;
    return (j) ;
}
static char **endl(char **spl ,const char *s, char c)
{
  int i;
  int j;
  int a;

  a = 0;
  i = 0;
  j = 0;
  while (s[i] != '\0' )
  {
    while (s[i] && s[i] == c)
    i++;
    if (s[i] == '\0')
    break ;
    while(s[i + j] && s[j + i ] !=  c)
    j++;
    spl[a] = malloc(j * sizeof(char) + 1);
    if (!spl[a])
    {
      freed(spl);
    return NULL;
    }
   ft_strlcpy(spl[a] ,s + i, j + 1);
    i = i +j;
  j = 0;
  a++;
   }
   spl[a] = NULL;
return (spl);
}
char    **ft_split(char const *s, char c)
{
  if (!s)
  return NULL;
 int a = rows(s, c);
  if (a == 0)
  return NULL;
 char **spl;

 spl = malloc(a * sizeof(char *));
 if (!spl)
	 return NULL;
 spl = endl(spl,s,c);
return (spl);
}
