/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:01:10 by ahallain          #+#    #+#             */
/*   Updated: 2022/05/08 16:34:58 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == 0 || src == 0)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}
