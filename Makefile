NAME = ch
GCC = gcc
FLAGS =  -Wall -Wextra -Werror
HELPER_PATH = ./ft_printf/
# BONUS = ./checker/
# PRINTF = ./ft_printf/ft_printf.h

PRINTF = $(HELPER_PATH)libftprintf.a
MAKE = make -C

MANDATORY = $(wildcard ./*.c)
OBJS = $(patsubst %.c, %.o, $(MANDATORY))

all: $(NAME)

$(NAME) : $(OBJS) $(PRINTF)
	$(GCC) $(FLAGS) ./checker/checker.c $(OBJS) $(PRINTF) -o $@

./%.o : ./%.c
	$(GCC) $(FLAGS) -c $< -o $@

$(PRINTF) :
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
