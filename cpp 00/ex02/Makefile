# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/14 20:46:03 by rugrigor          #+#    #+#              #
#    Updated: 2024/07/15 22:15:00 by rugrigor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

BUILD =	build

CC = c++

SRC = Account.cpp tests.cpp

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