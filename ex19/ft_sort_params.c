/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 13:26:39 by upierre-          #+#    #+#             */
/*   Updated: 2017/02/20 15:03:29 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	char	*str;
	int		i;
	int		i2;
	int		j;

	i = 1;
	i2 = 2;
	while (i2 < ac)
	{
		j = 0;
		while (av[i][j] == av[i2][j])
			j++;
		if (av[i][j] > av[i2][j])
		{
			str = av[i];
			av[i] = av[i2];
			av[i2] = str;
		}
		i2++;
		if (i2 == ac && i < (ac - 1))
		{
			i += 1;
			i2 = i + 1;
		}
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return(0);
}
