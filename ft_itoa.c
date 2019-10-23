/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:01:37 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/19 20:19:07 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_count(int n)
{
	size_t count;

	count = 0;
	if (n < 0)
	{
		count++;
		if (n == -2147483648)
		{
			count++;
			n = 147483648;
		}
		else
			n *= -1;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count + 1);
}

char	*ft_setnbr(int n, char *nbr)
{
	size_t	index;

	index = 0;
	if (n < 0)
	{
		nbr[index++] = '-';
		if (n == -2147483648)
		{
			nbr[index++] = '2';
			n = 147483648;
		}
		else
			n *= -1;
	}
	nbr[ft_count(n) + index] = 0;
	while (n > 9)
	{
		nbr[ft_count(n) - 1 + index] = n % 10 + '0';
		n /= 10;
	}
	nbr[index] = n % 10 + '0';
	return (nbr);
}

char	*ft_itoa(int n)
{
	char *nbr;

	if (!(nbr = malloc(ft_count(n) + 1)))
		return (NULL);
	return (ft_setnbr(n, nbr));
}
