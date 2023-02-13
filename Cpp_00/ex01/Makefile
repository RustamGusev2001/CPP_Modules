NAME = phonebook
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CC = clang++

SRCS = contact.cpp main.cpp phonebook.cpp
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
	@echo "$(F_GREEN)Create phonebook $(F_NONE)"
$(NAME): $(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all