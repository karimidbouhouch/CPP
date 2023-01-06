NAME 	= ScavTrap

FLAGS 	= -Wall -Wextra -Werror -std=c++98

SRC		= 	ClapTrap.cpp\
			ScavTrap.cpp\
			main.cpp

INC		= ClapTrap.hpp\
		  ScavTrap.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ)
		c++ $(FLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all