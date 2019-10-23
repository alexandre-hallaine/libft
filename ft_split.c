/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:12:00 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/23 15:37:34 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_count1(char const *s, char c)
{
	size_t	index;
	size_t	len;
	size_t	count;

	index = 0;
	len = 0;
	count = 0;
	while (s[index + len])
	{
		if (s[index + len] == c)
			if (len)
			{
				count++;
				index += len;
				len = 0;
			}
			else
				index++;
		else
			len++;
	}
	if (len)
		return (count + 1);
	return (count);
}

char	*ft_write(char const *s, size_t index, size_t len)
{
	char	*str;
	size_t	index1;

	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	index1 = 0;
	while (s[index] && len--)
		str[index1++] = s[index++];
	str[index1] = 0;
	return (str);
}

char	**ft_set(char const *s, char c, char **tab)
{
	size_t	index;
	size_t	index1;
	size_t	len;

	index = 0;
	index1 = 0;
	len = 0;
	while (s[index + len])
	{
		if (s[index + len] == c)
			if (len)
			{
				tab[index1++] = ft_write(s, index, len);
				index += len;
				len = 0;
			}
			else
				index++;
		else
			len++;
	}
	if (len)
		tab[index1++] = ft_write(s, index, len);
	tab[index1] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!(tab = malloc(sizeof(char*) * (ft_count1(s, c) + 1))))
		return (NULL);
	tab = ft_set(s, c, tab);
	return (tab);
}
