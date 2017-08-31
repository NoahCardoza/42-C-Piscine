# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:12:44 by nocardoz          #+#    #+#              #
#    Updated: 2017/08/27 14:37:41 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FILES = do_op ft_exe ft_io ft_utills
SRC_DIR = ./src
HEADRERS = ./includes

FILESC = ./src/*.c
# $(patsubst %, $(SRC_DIR)/%.c, $(FILES))
FILESO = *.o
# $(patsubst %, %.o, $(FILES))

.PHONY: all clean fclean re

all: $(NAME)

test:
	@rm -rf $(NAME)
	@cat > $(NAME) <<< "bc <<< \$$1"
	@chmod 500 $(NAME);

$(FILESO):
	@gcc -Wall -Wextra -Werror -c -I $(HEADRERS) $(FILESC)

$(NAME): $(FILESO)
	@gcc -Wall -Wextra -Werror -o $(NAME) -I $(HEADRERS) $(FILESO)

clean:
	@rm -rf $(NAME)
	@/bin/rm -f $(FILESO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
