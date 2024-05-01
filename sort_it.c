/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:07:27 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/01 18:09:36 by marikhac         ###   ########.fr       */
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

void sort_index(t_stack *the_a)
{
	int i = 0;
	while(i < count_nodes(the_a))
	{
		return ;
	}
}

void	sort_it(t_stack *the_a, t_stack *the_b)
{
	int		counter;
	int 	offset;
	int 	index;

	if (if_empty(the_a))
		return ;
	index = 0;
	offset = find_offset(the_a);
	counter = count_nodes(the_a);
	if(count_of_nodes(the_a) <= 10)
	{
		up_to_ten(the_a, the_b);
		return ;
	}

	while(index < counter)
	{
		if(node-> <= counter)
		{
			push_from_to(the_a, the_b);
			rev_rotate(the_b, visible);
			counter++;
		}
		else if(i <= x + n)
		{
			push_from_to(the_a, the_b);
			counter++;
		}
		else
			rotate(the_a, visible);
		// process_til_sorted(the_a, cheap);
		// push_from_to(the_a, the_b);
	}
	while (!if_empty(the_b))
	{
		process_til_sorted(the_a, the_cheapest(the_b));
	}
}
