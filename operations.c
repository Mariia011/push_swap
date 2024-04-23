/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/23 19:36:51 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *a)
{
	int	tmp;

	tmp = a->head->value_;
	a->head->value_ = a->head->next->value_;
	a->head->next->value_ = tmp;
}

void	rotate(t_stack *a)
{
	if (a->head == NULL)
		return ;
	a->head = a->head->previous;
}

void	rev_rotate(t_stack *a)
{
	if (a->head == NULL)
		return ;
	a->head->previous = a->head;
}

void	push(t_stack *stack, t_node *node)
{
	t_node	*tmp;

	if(stack->head->prev == NULL)
	{
		stack->head->prev = tmp;
	}
	tmp = stack->head;
	stack->head = node;
	stack->prev = 
 	node->next = stack->head;
}
