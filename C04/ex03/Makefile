NAME = Interface

FLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

SRCS =	main.cpp 		\
		AMateria.cpp	\
		Ice.cpp			\
		Cure.cpp		\
		Character.cpp	\
		MateriaSource.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++	$(FLAGS) $(SRCS) -o Interface

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all