/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:52:17 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/07 09:33:45 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src1;
	size_t	i;
	size_t	j;

	i = 0;
	j = len;
	dest = (char *)dst;
	src1 = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (src1 > dest)
	{
		while (len > i)
		{
			dest[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (len--)
			dest[len] = src1[len];
	}
	dest[j] = '\0';
	return (dest);
}
