/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:04:35 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/11 15:25:48 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*arr;
	int		len;
	int		i;

	len = ft_strlen(s);
	arr = (char *)s;
	ch = (char)c;
	if (ch == '\0')
		return (arr + len);
	i = len - 1;
	while (i >= 0)
	{
		if (arr[i] == ch)
			return (&arr[i]);
		i--;
	}
	return (NULL);
}
