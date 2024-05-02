/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_to_ten.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:21:50 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/02 16:37:00 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nodes(t_stack *stack)
{
	t_node	*tmp;
	int		count;

	count = 1;
	if (stack == NULL)
		return (0);
	tmp = stack->head->next;
	while (tmp != stack->head)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void	up_to_ten(t_stack *stack, t_stack *stack1)
{
	t_node	*cheap;

	cheap = the_cheapest(stack);
	if (if_empty(stack))
		return ;
	while (if_sorted(stack) == NULL && count_nodes(stack) > 3)
	{
		process_til_sorted(stack, cheap);
		push_from_to(stack, stack1);
		cheap = the_cheapest(stack);
	}
	if (count_nodes(stack) == 3 && if_sorted(stack) == NULL)
		sort_three(stack, stack1);
	else
		process_til_sorted(stack, the_cheapest(stack));
	while (!if_empty(stack1))
	{
		push_from_to(stack1, stack);
	}
}
