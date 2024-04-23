/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:31:21 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/23 19:51:01 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pop(t_stack *stack, t_stack *stack2)
{
	t_node *new;
	t_node *tmp;
	if(if_empty(stack))
		return;
	tmp = t_stack->head;
	t_stack->head = new;
	t_stack->head->previous = tmp;
	push(t_stack2, new);
}

void stack_push(t_stack const *stack, t_stack const *stack2)
{
	t_node *node;

	stack->head->value_ = node->value_;
	stack->head = stack->head->prev;

}

