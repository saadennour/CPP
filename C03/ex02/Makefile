NAME = FragTrap

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o FragTrap

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all
