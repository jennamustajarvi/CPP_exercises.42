# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/09 15:52:02 by jemustaj          #+#    #+#              #
#    Updated: 2026/09/09 16:09:33 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rdf

SRC_DIR = src
INC_DIR = include
OBJ_DIR = build

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all: $(OBJ_DIR)/$(NAME)

$(OBJ_DIR)/$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(OBJ_DIR)/$(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CPP) $(CPP_FLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ_DIR)/$(NAME) $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re
