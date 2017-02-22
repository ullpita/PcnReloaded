# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upierre- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/22 11:17:25 by upierre-          #+#    #+#              #
#    Updated: 2017/02/22 11:42:15 by upierre-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = 	ft_putchar.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_swap.c \


BINARIES = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(BINARIES)
	ar rc $(NAME) $(BINARIES)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(BINARIES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all