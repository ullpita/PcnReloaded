#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb < 0)
    {
      ft_putchar('-');
      nb = -nb;
    }
    if(nb >= 10)
    {
      ft_putnbr(nb /10);
      ft_putnbr(nb % 10);
    }
    else
      ft_putchar(nb + '0');
}

int	ft_sqrt(int nb)
{
  int r;

  if (nb <= 0)
    return(0);
  r = 0;
  while (r < nb)
  {
    if (nb == (r * r))
      return(r);
    r++;
  }
  return(0);
}

int	main(void)
{
  ft_putnbr(ft_sqrt(64));
  return(0);
}
