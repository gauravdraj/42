/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:25:41 by garaj             #+#    #+#             */
/*   Updated: 2019/07/24 14:25:42 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*elem;

	if (*begin_list)
	{
		elem = *begin_list;
		while ((*cursor).next)
		{
			elem = (*cursor).next;
		}
		(*elem).next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
