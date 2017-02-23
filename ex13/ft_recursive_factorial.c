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

int   ft_recursive_factorial(int nb)
{
  if (nb < 0)
    return (0);
  if (nb == 1 || nb == 0)
    return(1);
  return(nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
  int i;

  i = ft_recursive_factorial(5);
  ft_putnbr(i);
  return (0);
}
