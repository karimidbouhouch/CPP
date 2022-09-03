NAME = megaphone

SRC = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)
$(NAME) : $(OBJ) 
		c++ $(CFLAGS) -std=c++98 $(OBJ) -o $(NAME)
clean:
		@rm -f $(OBJ)
fclean: clean
		@rm -f $(NAME)
re: fclean all