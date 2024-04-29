/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:19:24 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/29 21:45:34 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *the_cheapest(t_stack *a)
{
	t_node *tmp;
	t_node *cheapest = a->head;
	tmp = a->head->next;
	while(tmp != a->head)
	{
		if (cheapest->value_ > tmp->value_)
			cheapest = tmp;
		tmp = tmp->next;
	}
	return(cheapest);
}

t_node *the_biggest(t_stack *a)
{
	t_node *tmp;
	t_node *biggest = a->head;
	tmp = a->head->next;
	while(tmp != a->head)
	{
		if (biggest->value_ < tmp->value_)
			biggest = tmp;
		tmp = tmp->next;
	}
	return(biggest);
}


static void case_132(t_stack *stack)
{
	t_stack *b = stack_init_empty('b');

	push_from_to(stack, b);
	swap(stack);

	push_from_to(b, stack);
}

static void case_321(t_stack *stack)
{
	swap(stack);
	rev_rotate(stack, visible);
}

static void case_213(t_stack *stack)
{
	swap(stack);
}

void sort_three(t_stack *stack)
{
	t_node *cheap;
	t_node *big;
	cheap = if_sorted(stack);

	if (cheap != NULL)
	{
		process_til_sorted(stack, cheap);
		return;
	}
	cheap = the_cheapest(stack);
	big = the_biggest(stack);
	if(stack->head == cheap && cheap->next == big)
		case_132(stack);
	else if(stack->head == big && big->prev == cheap)
		case_321(stack);
	else if(stack->head != big && stack->head != cheap)
		case_213(stack);
}
