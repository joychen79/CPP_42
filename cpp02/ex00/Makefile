# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 13:53:40 by jingchen          #+#    #+#              #
#    Updated: 2024/09/29 13:51:08 by jingchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Fixed.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = fixed

CXX = c++

CXXFLAGES = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
		$(CXX) $(CXXFLAGES) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re