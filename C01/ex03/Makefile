NAME = Violence

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Violence

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all
