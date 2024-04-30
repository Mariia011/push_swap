/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 15:00:40 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include "./libft/libft.h"

#define invalid_input 2147483650

typedef enum e_mode{
	silent,
	visible
} t_mode;

typedef struct s_node{
	int value_;
	struct s_node *prev;
	struct s_node *next;
}	t_node;

typedef struct s_stack{
	t_node 	*head;
	char 	name;
}	t_stack;




typedef void (*fptr)(t_stack *stack, t_mode mode); // pointer to rotate and rev rotate

t_node	*if_sorted(t_stack *stack);
fptr	find_route(t_stack *stack, t_node *target);
t_node	*the_cheapest(t_stack *a);
t_node *the_biggest(t_stack *a);

void	swap(t_stack *a);
void	rotate(t_stack *a, t_mode mode);
void	rev_rotate(t_stack *a, t_mode mode);
int		pop(t_stack *stack);
void	pop_from_to(t_stack *stack1, t_stack *stack2);
void	rr(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);

int 	if_empty(t_stack *stack);
void	print_stack(t_stack *choto);
void	clear_it(t_stack *stack);

void	push_init(t_stack *stack, const int num);
t_stack	*stack_init(const int num, const char letter);
t_node	*node_init(const int number);
void sort_three(t_stack *stack);

void push_from_to(t_stack *stack1, t_stack *stack2);
t_stack *stack_init_empty(const char letter);
void process_til_sorted(t_stack *stack, t_node *cheap);

void sort_five(t_stack *stack, t_stack *stack1);


// parcing
int	alloc_nums(int ac, char **av, t_stack *stack);
void	free_mat(char **mat);
void	destroy(t_stack **stack);
t_stack	*init_from_input(int argc, char **argv, const char letter);
t_node	*find(int const val, t_stack *stack);
int if_empty_args(int argc, char **argv);


#endif
