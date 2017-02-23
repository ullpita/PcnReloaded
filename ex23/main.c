#include "ft_point.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('\0');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	ft_putnbr(point->x);
	ft_putnbr(point->y);
}

int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}
