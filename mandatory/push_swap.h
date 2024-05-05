/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/05 16:21:08 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# define BAD_VALUE 2147483650

typedef enum e_mode
{
	silent,
	visible
}					t_mode;

typedef struct s_node
{
	int				value_;
	long long int	index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	char			name;
}					t_stack;

typedef void		(*t_fptr)(t_stack *stack, t_mode mode);
// pointer to rotate and rev rotate

t_node				*if_sorted(t_stack *stack);
t_fptr				find_route(t_stack *stack, t_node *target);
t_node				*the_cheapest(t_stack *a);
t_node				*the_biggest(t_stack *a);

void				swap(t_stack *a, t_mode mode);
void				rotate(t_stack *a, t_mode mode);
void				rev_rotate(t_stack *a, t_mode mode);
int					pop(t_stack *stack);
void				rr(t_stack *a, t_stack *b, t_mode mode);
void				rrr(t_stack *a, t_stack *b, t_mode mode);

void				__exit_handle(char *err);
int					if_empty(t_stack *stack);
void				clear_it(t_stack *stack);

void				push_init(t_stack *stack, const int num);
t_stack				*stack_init(const int num, const char letter);
t_node				*node_init(const int number);
void				sort_three(t_stack *stack, t_stack *b);

void				push_from_to(t_stack *stack1, t_stack *stack2, t_mode mode);
t_stack				*stack_init_empty(const char letter);
void				process_til_sorted(t_stack *stack, t_node *cheap);

int					count_nodes(t_stack *stack);
void				up_to_ten(t_stack *stack, t_stack *stack1);

// parcing error handling
int					alloc_nums(int ac, char **av, t_stack *stack);
void				free_mat(char **mat);
void				destroy(t_stack **stack);
t_stack				*init_from_input(int argc, char **argv, const char letter);
t_node				*find(int const val, t_stack *stack);
int					if_empty_argc(int argc, char **argv);

int					count_nodes(t_stack *stack);

// sort it
void				sort_it(t_stack *the_a, t_stack *the_b);
int					find_offset(t_stack *the_a);
void				quick_sort(int *arr, int low, int high);
int					*make_arr(t_stack *the_a);

// void				sort_nums(t_stack *stack, t_stack *stack1);
// void				print_stack(t_stack *choto);

#endif
