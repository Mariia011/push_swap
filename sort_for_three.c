/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:19:24 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/02 19:58:20 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	case_132(t_stack *stack, t_stack *b)
{
	push_from_to(stack, b);
	swap(stack);
	push_from_to(b, stack);
}

static void	case_321(t_stack *stack)
{
	swap(stack);
	rev_rotate(stack, visible);
}

static void	case_213(t_stack *stack)
{
	swap(stack);
}

void	sort_three(t_stack *stack, t_stack *b)
{
	t_node	*cheap;
	t_node	*big;

	cheap = if_sorted(stack);
	if (cheap != NULL)
	{
		process_til_sorted(stack, cheap);
		return ;
	}
	cheap = the_cheapest(stack);
	big = the_biggest(stack);
	if (stack->head == cheap && cheap->next == big)
		case_132(stack, b);
	else if (stack->head == big && big->prev == cheap)
		case_321(stack);
	else if (stack->head != big && stack->head != cheap)
		case_213(stack);
}
