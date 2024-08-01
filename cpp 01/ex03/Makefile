# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 21:22:31 by rugrigor          #+#    #+#              #
#    Updated: 2024/07/20 01:07:34 by rugrigor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

BUILD =	build

CC = c++

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:%.cpp=$(BUILD)/%.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

$(BUILD)/%.o:	%.cpp Makefile
			$(CC) $(CPPFLAGS) -c $< -o $@

all: $(BUILD) $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	
$(BUILD):
			@mkdir -p $(BUILD)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(OBJ) $(BUILD)

re: fclean all

.PHONY: all clean fclean re