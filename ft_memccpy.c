/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:03:24 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/10 15:28:13 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	char	*str;

	str = dst;
	while (n--)
	{
		if (*((char*)src) == c)
			return (str);
		*str = *((char*)src);
		str++;
		src++;
	}
	return (dst);
}
