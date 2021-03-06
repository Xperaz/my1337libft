/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:16:15 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/15 15:49:17 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	size;
	size_t	j;

	size = ft_strlen(needle);
	if (!needle || size == 0)
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[j + i] == needle[j] && j + i < len)
		{
			j++;
			if (needle[j] == '\0')
				return (&((char *)(haystack))[i]);
		}
		i++;
	}
	return (0);
}
