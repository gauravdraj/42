/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:34:21 by garaj             #+#    #+#             */
/*   Updated: 2019/07/11 13:34:24 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_putnbr(int nb)
{
    ft_putchar(nb + '0');
}
int main()
{
    ft_putnbr(1);
    ft_putnbr(24);
    ft_putnbr(576);
    return(0);
}