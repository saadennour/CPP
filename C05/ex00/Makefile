NAME = Bureaucrat

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Bureaucrat.cpp \
		main.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
		c++	$(FLAGS) $(SRCS) -o Bureaucrat

fclean :
		rm -rf $(NAME)

re : fclean all