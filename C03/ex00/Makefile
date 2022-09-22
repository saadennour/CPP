NAME = ClapTrap

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		ClapTrap.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o ClapTrap

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all
