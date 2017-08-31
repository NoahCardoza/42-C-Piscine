# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 23:22:27 by nocardoz          #+#    #+#              #
#    Updated: 2017/08/21 13:07:03 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs
FILESC = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
FILESO = ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FILESS = $(addprefix $(SRC)/, FILESC)
HEADRERS = includes

all: $(NAME)

$(NAME):
	gcc -c -I $(HEADRERS) $(FILESC)
	ar rc $(NAME) $(FILESO)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all