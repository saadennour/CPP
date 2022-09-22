NAME = Bsp

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Bsp

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all