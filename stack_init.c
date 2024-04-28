/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:34:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/28 18:29:27 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*node_init(const int number)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if(!new_node)
		free(new_node); // err
	new_node->value_ = number;
	new_node->next = new_node;
	new_node->prev = new_node;
	return(new_node);
}

t_stack	*stack_init(const int num)
{
	t_node *node;
	node = node_init(num);
  	t_stack *new_stack;
	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		free(new_stack); // err
	new_stack->head = node;
	return (new_stack);
}

void	push_init(t_stack *stack, const int num)
{
	t_node *node = node_init(num);
	t_node	*tmp;
	tmp = stack->head;
	stack->head = node;
	stack->head->next = tmp;
	stack->head->prev = tmp->prev;
	tmp->prev->next = stack->head;
	tmp->prev = stack->head;
}
