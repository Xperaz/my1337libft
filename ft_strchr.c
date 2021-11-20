/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:06:25 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/11 14:17:44 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*arr;

	arr = (char *)s;
	ch = (char)c;
	while (*arr)
	{
		if (*arr == ch)
			return (arr);
		arr++;
	}
	if (*arr == '\0' && c == '\0')
		return (arr);
	return (NULL);
}
