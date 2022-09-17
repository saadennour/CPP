NAME = harlFilter

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp \
		Harl.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o harlFilter

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all
