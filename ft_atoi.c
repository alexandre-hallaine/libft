/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:07:57 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/14 17:53:49 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_atoi(const char *str)
{
    int     multiply;
    long    nbr;

    multiply = 1;
    nbr = 0;
    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            multiply = -1;
        str++;
    }
    while (*str) {
        if (*str >= '0' && *str <= '9')
        {
            nbr *= 10;
            nbr += *str - '0';
            if (nbr < 0)
            {
                if (multiply == 1)
                    return (-1);
                return (0);
            }
        }
        else
            return (nbr * multiply);
        str++;
    }
    return (nbr * multiply);
}