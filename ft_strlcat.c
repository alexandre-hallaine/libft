/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:38:39 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/20 18:52:23 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	dst += dstlen;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	dstsize -= dstlen;
	if (dstsize > srclen)
		dstsize = srclen + 1;
	while (*src && dstsize-- - 1)
		*dst++ = *src++;
	*dst = 0;
	return (dstlen + srclen);
}
