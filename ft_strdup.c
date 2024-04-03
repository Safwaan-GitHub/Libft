/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:18:03 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:18:04 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	char	*str;
	int		len;
	int		count;

	count = 0;
	str = (char *)s;
	len = ft_strlen(str);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (count < len)
	{
		res[count] = str[count];
		count++;
	}
	res[len] = '\0';
	return (res);
}
