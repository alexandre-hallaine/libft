/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:07:57 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/23 17:43:14 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	getnbr(const char *str, int multiply)
{
	long	nbr;

	nbr = 0;
	while (*str)
	{
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

int			ft_atoi(const char *str)
{
	int	multiply;

	multiply = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			multiply = -1;
		str++;
	}
	return (getnbr(str, multiply));
}
