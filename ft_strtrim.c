/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:38:18 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/20 17:20:00 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		contain(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	lencpy;
	char	*dst;

	while (contain(*s1++, set))
		;
	len = ft_strlen(s1);
	s1 += len;
	while (contain(*--s1, set))
		len--;
	len++;
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s1 -= len - 1;
	lencpy = len;
	while (lencpy--)
		*dst++ = *s1++;
	*dst = 0;
	return (dst - len);
}
