NAME = PmergeMe

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp	\
		PmergeMe.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o PmergeMe

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all