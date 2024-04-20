NAME = push_swap
GCC = gcc -Wall -Wextra -Werror
MANDATORY = ./wildcard.c
OBJS = $(MANDATORY:=./.o)
# BONUS

all: $(NAME)

$(NAME) : $(MANDATORY)
	$(GCC) -o $@
