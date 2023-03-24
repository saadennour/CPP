NAME = RPN

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		RPN.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o RPN

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all
