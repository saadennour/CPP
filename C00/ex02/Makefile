NAME = Account

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	tests.cpp \
		Account.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Account

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all