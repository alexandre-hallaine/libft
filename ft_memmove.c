/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:01:10 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/11 15:26:31 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
		while (len--)
		{
			temp = *usrc++;
			*udst++ = temp;
		}
	else
		while (index)
		{
			index--;
			temp = usrc[index];
			udst[index] = temp;
		}
	return (dst);
}
