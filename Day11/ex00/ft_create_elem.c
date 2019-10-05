/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:10:31 by garaj             #+#    #+#             */
/*   Updated: 2019/07/24 14:10:32 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list			*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	(*elem).data = data;
	(*elem).next = NULL;
	return (elem);
}
