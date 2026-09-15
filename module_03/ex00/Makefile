# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/14 22:35:02 by jemustaj          #+#    #+#              #
#    Updated: 2026/09/15 09:19:56 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rdf

SRC_DIR = src
OBJ_DIR = build

SRC = main.cpp ClapTrap.cpp

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
