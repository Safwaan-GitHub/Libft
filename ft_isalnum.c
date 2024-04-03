/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:08:21 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:08:24 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	unsigned char	j;

	j = (unsigned char)i;
	if (ft_isalpha(j) || ft_isdigit(j))
		return (1);
	return (0);
}
