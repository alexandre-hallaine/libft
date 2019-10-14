/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:50:22 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/14 17:58:34 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *tab;

    if (!count || !size)
        return (NULL);
   tab = malloc(count * size);
    while (count--)
        *(char*)tab++ = 0;
    return (tab);
}