/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:53 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:17:54 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;
	char	*set;

	b = c;
	set = (char *)s;
	i = 0;
	while (set[i] != '\0')
	{
		if (*(set + i) == b)
		{
			return (set + i);
		}
		i++;
	}
	if (c == 0)
		return (set + ft_strlen(set));
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strchr("hello world", 'l'));
	printf("%s\n", ft_strchr("asdfgh jkl;źvcv", 'f'));
	printf("%s\n", ft_strchr("hey hey", 270));
}*/
