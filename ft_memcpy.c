/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:55:28 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/23 17:57:13 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
