/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:03:35 by aouhadou          #+#    #+#             */
/*   Updated: 2021/11/07 09:26:08 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*call;
	size_t	memory;

	memory = count * size;
	call = (void *) malloc(memory);
	if (!call)
		return (NULL);
	ft_bzero(call, memory);
	return (call);
}
