SRC = main.cpp Bureaucrat.cpp

CC = c++

CPPFLAGS = -Wextra -Werror -Wall -std=c++98

OBJ = $(SRC:.cpp=.o)

NAME = bureaucrat

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
