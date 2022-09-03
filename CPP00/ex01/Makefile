NAME	= phonebook
FLAGS 	= -Wall -Wextra -Werror
SRC 	= phonebook.cpp
INC 	= phonebook.hpp

OBJ		= $(SRC:%.cpp=%.o)

all		: $(NAME)
$(NAME) : $(OBJ) $(INC)
		c++ -std=c++98 $(FLAGS) $(OBJ) -o $(NAME)
clean 	:
		@rm -f $(OBJ)
fclean 	: clean
		@rm -f $(NAME)

re		: fclean all