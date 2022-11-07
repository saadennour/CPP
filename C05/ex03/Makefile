NAME = Intern

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Bureaucrat.cpp \
		ShrubberyCreationForm.cpp	\
		PresidentialPardonForm.cpp	\
		RobotomyRequestForm.cpp		\
		Intern.cpp	\
		Form.cpp	\
		main.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++	$(FLAGS) $(SRCS) -o Intern

fclean :
		rm -rf $(NAME)

re : fclean all