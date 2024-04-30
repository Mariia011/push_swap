NAME = push_swap
GCC = gcc
FLAGS =  -Wall -Wextra -Werror
HELPER_PATH = ./libft/

LIBFT = $(HELPER_PATH)libft.a
MAKE = make -C

MANDATORY = $(wildcard ./*.c)
OBJS = $(patsubst %.c, %.o, $(MANDATORY))

all: $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	$(GCC) $(FLAGS) $(OBJS) $(LIBFT) -o $@

./%.o : ./%.c
	$(GCC) -c $< -o $@

$(LIBFT) :
	$(MAKE) $(HELPER_PATH)

clean :
	$(MAKE) $(HELPER_PATH) clean
	rm -f $(OBJS)

fclean : clean
	$(MAKE) $(HELPER_PATH) fclean
	rm -f $(NAME)

re : fclean all

.PHONY :
	clean fclean re all
