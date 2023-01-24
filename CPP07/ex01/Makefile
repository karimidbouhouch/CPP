NAME 	= Iter

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

SRC		= 	main.cpp

INC		= 	iter.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ) $(INC)
		c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(INC)
		c++ $(CXXFLAGS) -c $< -o $@

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all