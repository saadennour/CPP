NAME = Phonebook

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = phonebook.cpp \
	   Contact.cpp \
	   main.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o phonebook

clean :
		rm -rf $(NAME)

fclean :
		rm -rf $(NAME)

re : fclean all