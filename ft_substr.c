/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:20:09 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:20:10 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	total_count(char *ss, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && ss[start + i])
	{
		i++;
	}
	return (i);
}

static char	*copy_str(size_t len, char *ss, unsigned int start, char *substr)
{
	size_t	i;

	i = 0;
	while (i < len && ss[start + i])
	{
		substr[i] = ss[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ss;
	int		total;

	if (!s)
		return (NULL);
	ss = (char *)s;
	if (start >= ft_strlen(ss))
	{
		substr = (char *)malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	total = total_count(ss, start, len);
	substr = (char *)malloc(total + 1);
	if (!substr)
		return (NULL);
	substr = copy_str(len, ss, start, substr);
	return (substr);
}
