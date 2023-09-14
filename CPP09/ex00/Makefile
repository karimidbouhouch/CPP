NAME = btc

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC 	= main.cpp BitcoinExchange.cpp

INC		= BitcoinExchange.hpp

OBJ		= $(SRC:%.cpp=%.o)

all		: $(NAME) $(INC)

$(NAME) : $(OBJ) $(INC)
		c++	$(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(INC)
		c++ $(CFLAGS) -c $< -o $@

clean	:
		rm -f $(OBJ)

fclean	: clean
		rm -f $(NAME)

re 		: fclean all