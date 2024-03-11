/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/11 17:22:00 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

#include <stdio.h>

typedef struct s_stack{
	int value;
	struct s_stack *next;
	struct s_stack *prev;
}t_stack;

void swap(t_stack **stack_from, t_stack **stack_to);
void push(t_stack **stack_a, t_stack **stack_b);


int if_empty(t_stack *a);
void print_stack(t_stack *head);

#endif
