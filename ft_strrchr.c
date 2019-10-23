/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:02:14 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/16 19:15:04 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*us;
	char	*last;

	us = (char *)s;
	last = NULL;
	while (*us || !c)
	{
		if (!*us)
			return (us);
		if (*us == (char)c)
			last = us;
		us++;
	}
	return (last);
}
