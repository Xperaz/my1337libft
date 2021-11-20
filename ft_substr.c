/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:22:18 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/07 09:34:49 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;
	size_t	len1;

	if (!s)
		return (NULL);
	len1 = ft_strlen(s);
	if (start >= len1)
		return (ft_calloc(1, 1));
	if (len > len1)
		len = len1;
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = start;
	j = 0;
	while (len > 0 && (start < len1))
	{
		res[j++] = s[i++];
		len--;
	}
	res[j] = '\0';
	return (res);
}
