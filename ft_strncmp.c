/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:30:03 by ahallain          #+#    #+#             */
/*   Updated: 2022/05/08 00:10:12 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
		if (*s1++ != *s2++)
			return ((unsigned char)*--s1 - (unsigned char)*--s2);
	return (0);
}
