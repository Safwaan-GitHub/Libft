/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanoor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:13:23 by sanoor            #+#    #+#             */
/*   Updated: 2023/11/13 18:13:24 by sanoor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		last = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = last;
	}
}
