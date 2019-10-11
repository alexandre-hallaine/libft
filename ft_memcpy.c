/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:55:28 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/10 17:24:23 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*str;

	if (dst == NULL && src == NULL)
		return (dst);
	str = dst;
	while (n--)
	{
		str[n] = ((char*)src)[n];
	}
	return (dst);
}