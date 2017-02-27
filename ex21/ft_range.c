/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 16:31:56 by upierre-          #+#    #+#             */
/*   Updated: 2017/02/20 16:33:49 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (NULL);
	i = max - min;
	tab = (int*)malloc(sizeof(*tab) * (i + 1));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	return (tab);
}
