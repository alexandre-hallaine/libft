/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:27:24 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/15 18:37:29 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char*   dst;
    size_t  s1len;
    size_t  s2len;

    if (!*s1 && !*s2)
        return (NULL);
    s1len = 0;
    while (s1[s1len])
        s1len++;
    s2len = 0;
    while (s2[s2len])
        s2len++;
    if (!(dst = malloc(sizeof(char) * (s1len + s2len + 1))))
        return (NULL);
    while (*s1)
        *dst++ = *s1++;
    while (*s2)
        *dst++ = *s2++;
    *dst = 0;
    return (dst - s1len - s2len);
}