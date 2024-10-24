# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rugrigor <rugrigor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/01 09:28:30 by rugrigor          #+#    #+#              #
#    Updated: 2024/07/01 10:06:34 by rugrigor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

BUILD =	build

CC = c++

SRC = megaphone.cpp

OBJ = $(BUILD)/$(SRC:.cpp=.o)

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