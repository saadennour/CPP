NAME = Zombie

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Zombie

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all