NAME = Interface

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	AMateria.cpp	\
		Ice.cpp			\
		Cure.cpp		\
		ICharacter.cpp	\

all : $(NAME)

$(NAME) : $(SRCS)
		c++	$(FLAGS) $(SRCS) -o Interface

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all