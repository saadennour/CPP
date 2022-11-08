NAME = convert

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++	$(FLAGS) $(SRCS) -o convert

fclean :
		rm -rf $(NAME)

re : fclean all