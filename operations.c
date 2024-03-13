/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/13 18:48:30 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void swap()
// {

// }

void push(t_stack *stack, t_node *node)
{
	node->next = stack->first;
	stack->first = node;
	if (NULL == stack->last)
		stack->last = node;
	stack->last->next = node;
}
