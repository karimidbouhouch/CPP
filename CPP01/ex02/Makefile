NAME 	= BRAIN
FLAGS 	= -Wall -Wextra -Werror
SRC		= 	main.cpp\

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) 
$(NAME) : $(OBJ)
		c++ -std=c++98 $(FLAGS) $(OBJ) -o $(NAME)
clean 	:
		@rm -f $(OBJ)
fclean 	: clean
		@rm -f $(NAME)

re		: fclean all