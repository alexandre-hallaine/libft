/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:01:10 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/23 17:57:41 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*udst;
	const unsigned char	*usrc;
	unsigned char		temp;
	size_t				index;

	if (dst == NULL && src == NULL)
		return (NULL);
	udst = dst;
	usrc = src;
	index = len;
	if (usrc > udst)
		while (index--)
		{
			temp = *usrc++;
			*udst++ = temp;
		}
	else
		while (index--)
		{
			temp = usrc[index];
			udst[index] = temp;
		}
	return (dst);
}
