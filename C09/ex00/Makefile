NAME = btc

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		BitcoinExchange.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o btc

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all
