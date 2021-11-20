/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:40:13 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/10 17:02:25 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char *str, char delim)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == delim)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == delim && str[i + 1] != delim)
			count++;
		i++;
	}
	if (str[i - 1] != delim)
		count++;
	return (count);
}

int	word_len(char *str, char delim)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != delim)
		i++;
	return (i);
}

char	**ft_free(char **res, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char *str, char delim)
{
	int		i;
	int		word_count;
	char	**res;
	int		j;

	if (!str)
		return (NULL);
	word_count = count_word(str, delim);
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0' && word_count--)
	{
		while (str[i] == delim)
			i++;
		res[j++] = (ft_substr(str + i, 0, word_len(str + i, delim)));
		if (!res[j - 1])
			ft_free(res, j);
		i = i + word_len(str + i, delim);
	}
	res[j] = 0;
	return (res);
}
