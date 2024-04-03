/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:09:12 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:09:15 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= 32 && a < 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%d\n", ft_isprint('f' - INT_MAX));
	printf("%d\n", ft_isprint(288));
	printf("%d\n", ft_isprint(128));
	
	printf("%d\n", ft_isprint(-1));
	printf("%d\n", ft_isprint(130));
}*/
