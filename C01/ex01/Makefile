NAME = Horde

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Horde

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all