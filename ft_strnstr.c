/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:09:55 by ahallain          #+#    #+#             */
/*   Updated: 2019/10/14 17:03:50 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t index;
    size_t index1;

    if (!*needle)
        return ((char*)haystack);
    index = 0;
    while (haystack[index] && len - index) {
        if (haystack[index] == *needle)
        {
            index1 = 0;
            while (haystack[index + index1] == needle[index1])
            {
                index1++;
                if (!needle[index1])
                    return ((char*)haystack + index);
            }
            index += index1;
        }
        else
        index++;
    }
    return (NULL);
}