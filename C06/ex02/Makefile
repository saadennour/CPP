NAME = Identify

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		Classes.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Identify

fclean :
		rm -rf $(NAME)

re : fclean all