NAME = serialization

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		Data.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o serialization

fclean :
		rm -rf $(NAME)

re : fclean all