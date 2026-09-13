# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/12 11:52:17 by jemustaj          #+#    #+#              #
#    Updated: 2026/09/13 12:34:13 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rdf

SRC_DIR = src
OBJ_DIR = build

SRC = main.cpp

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

test: all
	@chmod 777 tests.sh
	@./tests.sh

.PHONY: all clean fclean re test
