NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o megaphone

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all