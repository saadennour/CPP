NAME = Span

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		Span.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o Span

fclean :
		rm -rf $(NAME)

re : fclean all