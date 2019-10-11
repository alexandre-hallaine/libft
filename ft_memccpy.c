/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:03:24 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/10 17:24:21 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	unsigned char		*udst;
	const unsigned char *usrc;

	udst = dst;
	usrc = src;
	while (n)
	{
		if (*usrc == (unsigned char)c)
		{
			*udst++ = *usrc++;
			return (udst);
		}
		*udst++ = *usrc++;
		n--;
	}
	return (NULL);
}
