/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:25:47 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/23 16:31:58 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;
	size_t	index;

	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	slen = 0;
	while (s[slen++])
		;
	s += start;
	index = 0;
	while (len-- && index + start < slen)
	{
		dst[index] = s[index];
		index++;
	}
	dst[index] = 0;
	return (dst);
}
