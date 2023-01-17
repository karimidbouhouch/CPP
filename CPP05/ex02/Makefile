NAME 	= Form

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

SRC		= 	Bureaucrat.cpp Form.cpp main.cpp 

INC		= Bureaucrat.hpp Form.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ) $(INC)
		c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all