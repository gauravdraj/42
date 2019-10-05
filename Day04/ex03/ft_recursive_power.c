/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:41:44 by garaj             #+#    #+#             */
/*   Updated: 2019/07/13 14:41:47 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int a;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	a = ft_recursive_power(nb, (power / 2));
	if (power % 2 == 0)
	{
		return (a * a);
	}
	else
	{
		return (nb * a * a);
	}
}
