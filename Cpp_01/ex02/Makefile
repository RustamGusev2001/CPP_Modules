NAME = HI_THIS_IS_BRAIN
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
CC = clang++

SRCS = main.cpp
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

$(NAME): $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -I. -o $(NAME)
			@echo "$(F_GREEN)Create HI_THIS_IS_BRAIN $(F_NONE)"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all