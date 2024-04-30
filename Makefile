NAME = push_swap
GCC = gcc -Wall -Wextra -Werror
MANDATORY = ./*.c

HELPER_PATH = ./libft/
HELPER = $(HELPER_PATH)*.c
LIBFT = $(HELPER_PATH)libft.a

# OBJS = $(MANDATORY:=./.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(GCC) $(OBJS) -o $@

clean :
	rm $(OBJS)

fclean :
	clean $(NAME)
re :
	fclean all

.PHONY :
	clean fclean re all
