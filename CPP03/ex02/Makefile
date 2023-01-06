NAME 	= FragTrap

FLAGS 	= -Wall -Wextra -Werror -std=c++98

SRC		= 	ClapTrap.cpp\
			FragTrap.cpp\
			main.cpp

INC		= FragTrap.hpp\
		  ClapTrap.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ)
		c++ $(FLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all