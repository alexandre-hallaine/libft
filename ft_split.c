/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:12:00 by ahallain          #+#    #+#             */
/*   Updated: 2022/05/08 21:20:42 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	**tabcat(char **tab, char *str)
{
	size_t	len;
	char	**tmp;

	len = 0;
	while (tab[len])
		len++;
	tmp = (char **)malloc(sizeof(char *) * (len + 2));
	if (!tmp)
		return (NULL);
	tmp[len] = str;
	tmp[len + 1] = NULL;
	while (len--)
		tmp[len] = tab[len];
	free(tab);
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*tmp;

	tab = malloc(sizeof(char *));
	if (tab == NULL)
		return (NULL);
	*tab = 0;
	while (tab && s && *s)
	{
		tmp = ft_strchr(s, c);
		if (!tmp)
			tab = tabcat(tab, ft_strdup(s));
		else if (tmp != s)
			tab = tabcat(tab, ft_substr(s, 0, tmp - s));
		s = tmp;
		if (s)
			++s;
	}
	return (tab);
}
