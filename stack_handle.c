/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:31:57 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/03 13:26:47 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_empty(t_stack *stack)
{
	return (stack->head == NULL);
}

t_fptr	find_route(t_stack *stack, t_node *target)
{
	t_node	*left;
	t_node	*right;

	left = stack->head;
	right = stack->head->next;
	while (left != right)
	{
		if (left == target)
			return (rev_rotate);
		if (right == target)
			return (rotate);
		left = left->prev;
		right = right->next;
	}
	return (rotate);
}

void	process_til_sorted(t_stack *stack, t_node *cheap)
{
	t_fptr	f;

	f = find_route(stack, cheap);
	while (stack->head != cheap)
		f(stack, visible);
}

t_node	*if_sorted(t_stack *stack)
{
	t_node	*cheap;
	t_node	*tmp;

	cheap = the_cheapest(stack);
	tmp = cheap->next;
	while (tmp != cheap)
	{
		if (tmp->value_ < tmp->prev->value_)
			return (NULL);
		tmp = tmp->next;
	}
	return (cheap);
}

void	clear_it(t_stack *stack)
{
	t_node	*tmp;
	t_node	*to_free;

	if (stack == NULL)
		return ;
	if (stack->head == NULL)
	{
		return ;
	}
	tmp = stack->head->next;
	while (tmp != stack->head)
	{
		to_free = tmp->next;
		free(tmp);
		tmp = to_free;
	}
	free(stack->head);
	stack->head = NULL;
}
