/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:18:44 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:18:46 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*s;

	s = (char *)src;
	i = 0;
	if (size > 0)
	{
		while (s[i] && i < size - 1)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(s));
}
