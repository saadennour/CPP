NAME = Animal

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		Animal.cpp	\
		Cat.cpp		\
		Dog.cpp		\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Animal

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all
