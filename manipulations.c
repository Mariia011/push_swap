/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:31:21 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 16:34:13 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int pop(t_stack *stack)
{
	int val;
	t_node *old_head;

	if(if_empty(stack) == 1)
		return (0);
	val = stack->head->value_;
	if(stack->head->next == stack->head)
	{
		clear_it(stack);
	}
	else
	{
		old_head = stack->head;
		stack->head->prev->next = stack->head->next;
		stack->head->next->prev = stack->head->prev;//// rlgjoigjwoigjsoigjasoifgheofighgef
		stack->head = stack->head->next;
		free(old_head);
	}
	return(val);
}

