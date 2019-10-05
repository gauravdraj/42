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

int		ft_sqrt(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	else
	{
		while (result <= nb)
		{
			i++;
			result = i * i;
		}
	}
	return (0);
}

int 	main()
{
	int a;
	
    a = ft_sqrt(1);
    ft_putnbr(a);
    a = ft_sqrt(2);
    ft_putnbr(a);
    a = ft_sqrt(4);
    ft_putnbr(a);
    a = ft_sqrt(9);
    ft_putnbr(a);

    return (0);
}