NAME	= Brain

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC	= 	Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp\
		main.cpp

INC	= 	Animal.hpp\
		Cat.hpp\
		Dog.hpp\
		Brain.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ) $(INC)
		c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all