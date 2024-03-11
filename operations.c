/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/11 17:11:34 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack **stack_from, t_stack **stack_to)
{
	t_stack **tmp;
	if (if_empty(*stack_from) || if_empty(*stack_to))
		return;
	*tmp = *stack_from;
	*stack_from = *stack_to;
	*stack_to = *stack_from;
	print_stack(*stack_to);
}

void push(t_stack **stack_a, t_stack **stack_b)
{
	if(if_empty(*stack_a) || if_empty(*stack_b))
		return;
	(*stack_a)->prev = (*stack_b);
	(*stack_a)->next = NULL;
	(*stack_b)->next = (*stack_a);
	(*stack_b)->next = NULL;
}

// void rotate(t_stack **any)
// {

// }
