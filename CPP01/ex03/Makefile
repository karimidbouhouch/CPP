NAME 	= Unnecessary-violence
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRC		= 	main.cpp\
			HumanA.cpp\
			HumanB.cpp\
			Weapon.cpp\

OBJ 	= $(SRC:%.cpp=%.o)

INC 	= 	HumanA.hpp\
			HumanB.hpp\
			Weapon.hpp\

all 	: $(NAME)
$(NAME) : $(OBJ) $(INC)
		c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o		: %.cpp $(INC)
		c++ $(FLAGS) -o $@ -c $<

clean 	:
		@rm -f $(OBJ)
fclean 	: clean
		@rm -f $(NAME)

re		: fclean all