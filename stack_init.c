/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:34:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/25 17:04:12 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*node_init(const int number)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if(!new_node)
		free(new_node);
	new_node->value_ = number;
	return(new_node);
}

t_stack	*stack_init(t_node *node)
{
  	t_stack *new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		free(new_stack);
	new_stack->head = node;
	return (new_stack);
}

void	push_init(t_stack *stack, t_node *node)
{
	t_node	*tmp;

	if(!stack->head)
	{
		stack->head = node;
		return;
	}
	tmp = stack->head;
	stack->head = node;
	stack->head->next = tmp;
	stack->head->prev = tmp->prev;
}
