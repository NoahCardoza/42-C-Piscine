# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:12:44 by nocardoz          #+#    #+#              #
#    Updated: 2017/08/27 23:33:05 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FILES = ft_eval ft_eval_extra ft_exe ft_io ft_utills main
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
