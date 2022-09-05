NAME 	= Bank
FLAGS 	= -Wall -Wextra -Werror
SRC		= Account.cpp tests.cpp
OBJ 	= $(SRC:%.cpp=%.o)

INC 	= Account.hpp

all 	: $(NAME) $(INC)
$(NAME) : $(OBJ)
		c++ -std=c++98 $(FLAGS) $(OBJ) -o $(NAME)
clean 	:
		@rm -f $(OBJ)
fclean 	: clean
		@rm -f $(NAME)

re		: fclean all