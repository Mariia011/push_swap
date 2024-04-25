/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/25 16:34:48 by marikhac         ###   ########.fr       */
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

typedef struct s_node{
	int value_;
	struct s_node *previous;
	struct s_node *next;
}	t_node;

typedef struct s_stack{
	t_node 	*head;
	char 	stack;
}	t_stack;

void	swap(t_stack *a);
void	rotate(t_stack *a);
void	rev_rotate(t_stack *a);
void	push(t_stack *stack, t_node *node);

int		if_empty(t_stack *a);
void	print_stack(t_stack *head);

void	stack_push(t_stack const *stack, t_stack const *stack2);
void	push_init(t_stack *stack, t_node *node);
t_stack	*stack_init(t_node *node);
t_node	*node_init(const int number);

#endif
