/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:37:53 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/07 09:33:19 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	ch;
	char	*res;

	res = (char *)s;
	ch = (char)c;
	i = 0;
	while (i < n)
	{
		if (*res == ch)
			return (res);
		i++;
		res++;
	}
	return (NULL);
}
