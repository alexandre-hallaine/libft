/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:46:04 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/24 18:07:17 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

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
