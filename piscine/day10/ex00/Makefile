# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 23:22:27 by nocardoz          #+#    #+#              #
#    Updated: 2017/08/22 22:13:12 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
SRC_DIR = srcs
FILESC = $(patsubst %, $(SRC_DIR)/%.c, $(FILES))
FILESO = $(patsubst %, %.o, $(FILES))

HEADRERS = includes

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c -I $(HEADRERS) $(FILESC)
	@ar rc $(NAME) $(FILESO)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(FILESO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all