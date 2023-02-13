NAME	=	array

SRC		=	main.cpp \

HDR		=	Array.hpp \

# ---------------------------------
OBJ 	=	$(SRC:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJ) Makefile
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)
			@echo "Compiled successfully!" $(END)

%.o:		%.cpp $(HDR)
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

