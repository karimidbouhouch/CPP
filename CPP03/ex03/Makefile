NAME 	= DiamondTrap

FLAGS 	= -Wall -Wextra -Werror -std=c++98

SRC		= 	ClapTrap.cpp\
			FragTrap.cpp\
			ScavTrap.cpp\
			DiamondTrap.cpp\
			main.cpp

INC		= FragTrap.hpp\
		  ClapTrap.hpp\
		  ScavTrap.hpp\
		  DiamondTrap.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ)
		c++ $(FLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all