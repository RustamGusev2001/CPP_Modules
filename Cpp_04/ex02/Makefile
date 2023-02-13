NAME = Abstract
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
CC = c++
HDR		=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp

SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

F_NONE		= \033[37m
F_BOLD		= \033[1m
F_RED		= \033[31m
F_ORANGE	= \033[38m
F_YELLOW	= \033[0;33m
F_GREEN		= \033[32m
F_CYAN		= \033[36m
F_BLUE		= \033[34m 

all: $(NAME)

$(NAME): $(OBJS) $(HDR) Makefile
			$(CC) $(CFLAGS) $(OBJS) -I. -o $(NAME)
			@echo "$(F_GREEN)Create Abstract $(F_NONE)"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
