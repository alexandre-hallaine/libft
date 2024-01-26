/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:50:22 by ahallain          #+#    #+#             */
/*   Updated: 2024/01/26 18:25:02 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (size && count > (size_t)-1 / size)
		return (NULL);
	count *= size;
	tab = malloc(count);
	if (tab)
		ft_bzero(tab, count);
	return (tab);
}
