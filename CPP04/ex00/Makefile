NAME 	= Animal

CXX		= c++

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98 

SRC		= 	Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\
			main.cpp

INC		= Animal.hpp\
		  Cat.hpp\
		  Dog.hpp\
		  WrongAnimal.hpp\
		  WrongCat.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ)
		c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all