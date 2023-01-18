NAME 	= Form

CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

SRC		= 	Bureaucrat.cpp\
			AForm.cpp\
			PresidentialPardonForm.cpp\
			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp\
			Intern.cpp\
			main.cpp

INC		= 	Bureaucrat.hpp\
			AForm.hpp\
			PresidentialPardonForm.hpp\
			RobotomyRequestForm.hpp\
			Intern.hpp\
			ShrubberyCreationForm.hpp

OBJ 	= $(SRC:%.cpp=%.o)

all 	: $(NAME) $(INC)

$(NAME) : $(OBJ) $(INC)
		c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

clean 	:
		@rm -f $(OBJ)

fclean 	: clean
		@rm -f $(NAME)

re		: fclean all