/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:37:37 by garaj             #+#    #+#             */
/*   Updated: 2019/07/24 14:37:38 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*elem;

	elem = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = elem;
	else
	{
		(*elem).next = *begin_list;
		*begin_list = elem;
	}
}
