/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:34:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 20:00:51 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*node_init(const int number)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		__exit_handle("Malloc error\n");
	new_node->value_ = number;
	new_node->next = new_node;
	new_node->prev = new_node;
	return (new_node);
}

t_stack	*stack_init(const int num, const char letter)
{
	t_node	*node;
	t_stack	*new_stack;

	node = node_init(num);
	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		__exit_handle("Malloc error\n");
	new_stack->name = letter;
	new_stack->head = node;
	return (new_stack);
}

t_stack	*stack_init_empty(const char letter)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		__exit_handle("Malloc error\n");
	new_stack->name = letter;
	new_stack->head = NULL;
	return (new_stack);
}

void	push_init(t_stack *stack, const int num)
{
	t_node	*node;
	t_node	*tmp;

	node = node_init(num);
	if (if_empty(stack))
	{
		stack->head = node;
		return ;
	}
	tmp = stack->head;
	stack->head = node;
	stack->head->next = tmp;
	stack->head->prev = tmp->prev;
	tmp->prev->next = stack->head;
	tmp->prev = stack->head;
}
