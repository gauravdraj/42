/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:27:39 by garaj             #+#    #+#             */
/*   Updated: 2019/07/14 11:27:40 by garaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putchar(char c);

void	print_rows(int x, char first, char second, char last)
{
	int x1;

	x1 = 0;
	while (x1 <= (x - 1))
	{
		if (x1 == 0)
		{
			putchar(first);
		}
		else if (x1 == (x - 1))
		{
			putchar(second);
		}
		else
		{
			putchar(last);
		}
		x1++;
	}
	putchar('\n');
}

void	rush(int x, int y)
{
	int y1;

	y1 = 0;
	while (y1 <= (y - 1))
	{
		if (y1 == 0)
		{
			print_rows(x, '/', '\\', '*');
		}
		else if (y1 == (y - 1))
		{
			print_rows(x, '\\', '/', '*');
		}
		else
		{
			print_rows(x, '*', '*', ' ');
		}
		y1++;
	}
}
