/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:54:41 by garaj             #+#    #+#             */
/*   Updated: 2019/07/22 15:54:43 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
