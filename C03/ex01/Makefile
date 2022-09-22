NAME = ScavTrap

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		ClapTrap.cpp	\
		ScavTrap.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o ScavTrap

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all
