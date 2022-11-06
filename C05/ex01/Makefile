NAME = Form

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	Bureaucrat.cpp \
		Form.cpp	\
		main.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++	$(FLAGS) $(SRCS) -o Form

fclean :
		rm -rf $(NAME)

re : fclean all