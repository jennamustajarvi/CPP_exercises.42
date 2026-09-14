# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/14 10:05:53 by jemustaj          #+#    #+#              #
#    Updated: 2026/09/14 21:59:18 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = now_we_are_talking

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rdf

SRC_DIR = src
OBJ_DIR = build

SRC = main.cpp Fixed.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(OBJ_DIR)/$(NAME)

$(OBJ_DIR)/$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(OBJ_DIR)/$(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ_DIR)/$(NAME) $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re
