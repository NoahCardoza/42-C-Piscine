# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/28 23:27:35 by jbrown            #+#    #+#              #
#    Updated: 2017/08/30 21:31:25 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC_DIR = ./srcs/
RM = /bin/rm -f

INCLUDES = ./includes

FUNCTS = main memory ft_atoi_gobble ft_strlen map max_square io
OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRC_DIR)%.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))

.PHONY: all $(NAME) $(OBJECTS) clean fclean re

all: $(NAME)

$(OBJECTS):
	@gcc $(OPTIONS) $(FLAGS) -c $(CFILES) -I $(INCLUDES) -Ofast

$(NAME): $(OBJECTS)
	@gcc $(OPTIONS) $(FLAGS) $(OBJECTS) -o $(NAME) -I $(INCLUDES) -Ofast

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
