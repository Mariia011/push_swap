NAME = push_swap
NAME_BONUS = checker
CC = cc
FLAGS =  -Wall -Wextra -Werror
HELPER_PATH = ./ft_printf/

PRINTF = $(HELPER_PATH)libftprintf.a
MAKE = make -C

MANDATORY_PATH = ./mandatory/
BONUS_PATH = ./bonus/
MANDATORY_MAIN_SRC = ./main/push_swap.c
BONUS_MAIN_SRC = ./main/checker.c
MANDATORY_MAIN_OBJ = $(MANDATORY_MAIN_SRC:.c=.o)
BONUS_MAIN_OBJ = $(BONUS_MAIN_SRC:.c=.o)

# SRCS = $(wildcard $(SRCSPATH)*.c)
# OBJS = $(patsubst $(SRCSPATH)%.c,$(SRCSPATH)%.o,$(SRCS))

MANDATORY_SRCS = $(wildcard $(MANDATORY_PATH)*.c)
MANDATORY_OBJS = $(patsubst $(MANDATORY_PATH)%.c,$(MANDATORY_PATH)%.o,$(MANDATORY_SRCS))
BONUS_SRCS = $(wildcard $(BONUS_PATH)*.c)
BONUS_OBJS = $(patsubst $(BONUS_PATH)%.c,$(BONUS_PATH)%.o,$(BONUS_SRCS))

all: $(NAME)

$(NAME) : $(PRINTF) $(MANDATORY_OBJS) $(MANDATORY_MAIN_OBJ)
	$(CC) $(FLAGS) $(PRINTF) $(MANDATORY_OBJS) $(MANDATORY_MAIN_OBJ) -o $@

$(PRINTF) :
	$(MAKE) $(HELPER_PATH)

$(MANDATORY_PATH)%.o : $(MANDATORY_PATH)%.c
	$(CC) $(FLAGS) -c $< -o $@

$(MANDATORY_MAIN_OBJ) : $(MANDATORY_MAIN_SRC)
	$(CC) $(FLAGS) -c $< -o $@


bonus : $(NAME_BONUS)

$(NAME_BONUS) : $(MANDATORY_OBJS) $(BONUS_OBJS) $(BONUS_MAIN_OBJ) $(PRINTF)
	$(CC) $(CFLAGS) $(MANDATORY_OBJS) $(BONUS_OBJS) $(BONUS_MAIN_OBJ) $(PRINTF) -o $@

$(BONUS_PATH)%.o : $(BONUS_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_MAIN_OBJ) : $(BONUS_MAIN_SRC)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(MAKE) $(HELPER_PATH) clean
	rm -f $(MANDATORY_OBJS)
	rm -f $(BONUS_OBJS)
	rm -f $(MANDATORY_MAIN_OBJ)
	rm -f $(BONUS_MAIN_OBJ)

fclean : clean
	$(MAKE) $(HELPER_PATH) fclean
	rm -f $(NAME_BONUS)
	rm -f $(NAME)

re : fclean all

.PHONY :
	clean fclean re all bonus
