/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/20 19:55:56 by marikhac         ###   ########.fr       */
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

void	push(t_stack *stack, int number)
{
	t_node	*new_val;

	if (NULL == stack->head)
		return ;
	new_val->value_ = number;
	new_val->next = stack->head;
}
