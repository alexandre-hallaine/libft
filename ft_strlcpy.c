/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:46:04 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/11 16:59:40 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;
	unsigned char *usrc;
	unsigned char *udst;

	len = 0;
	usrc = (unsigned char*)src;
	udst = (unsigned char*)dst;
	while (*usrc && dstsize--)
	{
		*dst++ = *usrc++;
		len++;
	}
	*dst = '\0';
	return (len);
}
