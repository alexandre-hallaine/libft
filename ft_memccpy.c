/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:03:24 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/30 16:34:31 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c,
		size_t n)
{
	unsigned char		*udst;
	const unsigned char *usrc;

	udst = dst;
	usrc = src;
	while (n--)
	{
		if (*usrc == (unsigned char)c)
		{
			*udst++ = *usrc++;
			return (udst);
		}
		*udst++ = *usrc++;
	}
	return (NULL);
}
