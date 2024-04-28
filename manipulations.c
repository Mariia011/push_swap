/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:31:21 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/28 19:57:33 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pop(t_stack *stack, t_stack *stack2)
{
	int new;
	t_node *tmp;
	if(if_empty(stack) == 1)
		return;
	tmp = stack->head;
	new = stack->head->value_;
	tmp = stack->head->prev;
	stack_init(stack2, new);
}

void stack_push(t_stack const *stack, t_stack const *stack2)
{
	int n;

	n = stack->head->value;
	stack->head->value_ = stack->head->next;
	stack->head = stack->head->prev;
	stack2 = push_init(n);
}
