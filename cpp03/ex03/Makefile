NAME =diamondtrap

BUILD =	build

CC = c++

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:%.cpp=$(BUILD)/%.o)

CPPFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

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