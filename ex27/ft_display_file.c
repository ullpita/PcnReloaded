/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 16:33:28 by upierre-          #+#    #+#             */
/*   Updated: 2017/02/24 14:38:09 by upierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 1

int		ft_display_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE];

	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, ret);
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;

	if (ac < 2)
		write(1, "File name missing.\n", 19);
	if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		ft_display_file(fd);
	}
	return (0);
}
