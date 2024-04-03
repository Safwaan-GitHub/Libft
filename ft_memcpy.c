/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:15:10 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:15:11 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
