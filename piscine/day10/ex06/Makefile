# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:12:44 by nocardoz          #+#    #+#              #
#    Updated: 2017/08/22 22:11:14 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FILES = do_op ft_exe ft_io ft_utills
SRC_DIR = ./src
HEADRERS = ./includes

FILESC = $(patsubst %, $(SRC_DIR)/%.c, $(FILES))
FILESO = $(patsubst %, %.o, $(FILES))

.PHONY: all clean fclean re

all: $(NAME)

$(FILESO):
	@gcc -Wall -Wextra -Werror -c -I $(HEADRERS) $(FILESC)

$(NAME): $(FILESO)
	@gcc -Wall -Wextra -Werror -o $(NAME) -I $(HEADRERS) $(FILESO)

clean:
	@/bin/rm -f $(FILESO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all