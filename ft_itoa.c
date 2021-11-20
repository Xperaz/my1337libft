/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:52:49 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/10 18:46:46 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_postive(int n, char *res, char len)
{
	while (len > 0)
	{
		res[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (res);
}

char	*ft_negative(int n, int len, char *res)
{
	if (n == 0)
		res[0] = '0';
	else
	{
		n *= -1;
		res[0] = '-';
		while (len > 1)
		{
			res[len - 1] = (n % 10) + 48;
			n /= 10;
			len--;
		}
	}
	return (res);
}

int	ft_len(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		len = 1;
	if (n < 0)
		len += 1;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0 || n == 0)
		ft_negative(n, len, res);
	else
	{
		ft_postive(n, res, len);
	}
	return (res);
}
