/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:59:13 by ahallain          #+#    #+#             */
/*   Updated: 2022/05/08 21:20:45 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "forty_two.h"

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*tab;

	len = ft_strlen(s1) + 1;
	tab = malloc(len);
	if (tab)
		ft_strlcpy(tab, s1, len);
	return (tab);
}
