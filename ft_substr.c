/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:25:47 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/15 18:22:02 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dst;
    size_t  lencpy;
    
    if (!(dst = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    s += start;
    lencpy = len;
    while (lencpy--)
        *dst++ = *s++;
    *dst = 0;
    return (dst - len);
}