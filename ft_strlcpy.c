/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:46:04 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/14 15:02:37 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t    ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t    len;
    
    len = 0;
    while (src[len])
        len++;
    if (dstsize <= 0)
        return (len);
    if (dstsize > len)
        dstsize = len + 1;
    while (*src && dstsize-- - 1)
        *dst++ = *src++;
    *dst = '\0';
    return (len);
}
