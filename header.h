/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/22 16:27:10 by marikhac         ###   ########.fr       */
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
	t_node 	*head;
	char 	stack;
}	t_stack;

typedef struct s_node{
	int value_;
	t_node *previous;
	t_node *next;
}	t_node;

void	swap(t_stack *a);
void	rotate(t_stack *a);
void	rev_rotate(t_stack *a);
void	push(t_stack *stack, int number);

int		if_empty(t_stack *a);
void	print_stack(t_stack *head);

#endif
