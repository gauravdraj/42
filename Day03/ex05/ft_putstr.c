/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:09:32 by garaj             #+#    #+#             */
/*   Updated: 2019/07/12 16:09:34 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	printf("%c", c);
}

void    ft_putnbr(int ptr)
{
	printf("%d", ptr);
}
void    ft_putaddr(void *ptr)
{
	printf("%p", ptr);
}
void	ft_putstr(char *str)
{
	ft_putchar(*str);
}

int 	main()
{

    char a;
    char *ptr;

	a = "abcdef";
	ptr = &a;
	ft_putstr(ptr);
	return(0);
}
