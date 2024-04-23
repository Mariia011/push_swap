NAME = push_swap
GCC = gcc -Wall -Wextra -Werror
MANDATORY = ./wildcard.c

HELPER_PATH = ./libft/
HELPER = $(HELPER_PATH)*.c
LIBFT = $(HELPER_PATH)libft.a

OBJS = $(MANDATORY:=./.o)
#BONUS

all: $(NAME)

$(NAME) : $(MANDATORY)
	$(GCC) -o $@



clean :
	rm *.OBJS
	rm 
fclean :
	clean $(NAME)
re :
	fclean all
.PHONY
	clean fclean re all
