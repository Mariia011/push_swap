/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/13 18:41:09 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

#include <stdio.h>


typedef struct s_node{
	int value_;
	struct s_node *next;
}t_node;

typedef struct s_stack{
	t_node *first;
	t_node *last;
}t_stack;

void swap(t_stack **stack_from, t_stack **stack_to);
void push(t_stack **stack_a, t_stack **stack_b);

int if_empty(t_stack *a);
void print_stack(t_stack *head);

#endif
