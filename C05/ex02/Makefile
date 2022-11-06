NAME = ConcreteForms

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Bureaucrat.cpp \
		ShrubberyCreationForm.cpp	\
		PresidentialPardonForm.cpp	\
		RobotomyRequestForm.cpp		\
		Form.cpp	\
		main.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++	$(FLAGS) $(SRCS) -o ConcreteForms

fclean :
		rm -rf $(NAME)

re : fclean all