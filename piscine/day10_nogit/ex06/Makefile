# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:12:44 by nocardoz          #+#    #+#              #
#    Updated: 2017/08/21 14:38:12 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FILESC = src/*
HEADRERS = includes

all:
	gcc -o $(NAME) -I $(HEADRERS) $(FILESC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all