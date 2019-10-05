/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:21:36 by garaj             #+#    #+#             */
/*   Updated: 2019/07/24 15:21:37 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int count;

	count = 0;
	while (begin_list)
	{
		begin_list = (*begin_list).next;
		count++;
	}
	return (count);
}
