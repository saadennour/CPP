NAME = Brain

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		Animal.cpp	\
		Cat.cpp		\
		Dog.cpp		\
		Brain.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Brain

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all
