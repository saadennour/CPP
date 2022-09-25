NAME = DiamondTrap

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	\
		DiamondTrap.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o DiamondTrap

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all