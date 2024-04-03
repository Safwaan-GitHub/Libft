/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:15:20 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:15:21 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*array_dest;
	char	*array_src;

	i = 0;
	array_src = (char *)src;
	array_dest = (char *)dest;
	if (array_dest > array_src)
	{
		while (n-- > 0)
			array_dest[n] = array_src[n];
	}
	else
	{
		while (i < n)
		{
			array_dest[i] = array_src[i];
			i++;
		}
	}
	return (dest);
}
