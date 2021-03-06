/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:10:28 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/07 09:34:22 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	len;
	char			*res;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		res[k++] = s1[i++];
	j = 0;
	while (s2[j] != '\0')
		res[k++] = s2[j++];
	res[k] = '\0';
	return (res);
}
