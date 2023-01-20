NAME 	= Conversion

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

SRC		= 	Conversion.cpp\
			main.cpp

INC		= 	Conversion.hpp\

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ) $(INC)
		c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all