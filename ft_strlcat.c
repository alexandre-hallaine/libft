/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:38:39 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/12 20:26:46 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (*dst++)
		len++;
	if (dstsize <= 0)
		return (len);
	if (dstsize >= len)
		dstsize = len + 1;
	while (*src && dstsize-- > 1)
	{
		*dst++ = *src++;
		len++;
	}
	*dst = 0;
	return (len);
}
