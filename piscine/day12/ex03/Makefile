# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:12:44 by nocardoz          #+#    #+#              #
#    Updated: 2017/08/24 21:28:21 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
FILES = main
SRC_DIR = ./src
HEADRERS = ./includes

FILESC = $(patsubst %, $(SRC_DIR)/%.c, $(FILES))
FILESO = $(patsubst %, %.o, $(FILES))

.PHONY: all clean fclean re

all: $(NAME)

$(FILESO):
	@gcc -Wall -Wextra -Werror -c -I $(HEADRERS) $(FILESC)

$(NAME): $(FILESO)
	@gcc -Wall -Wextra -Werror -o $(NAME) -I$(HEADRERS) $(FILESC)
	@./$(NAME)

clean:
	@/bin/rm -f $(FILESO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
