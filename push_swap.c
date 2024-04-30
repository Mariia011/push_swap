/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 13:34:43 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// write push
// write pop

// write sort for three

// write find biggest_node;
// write find smallest_node;

// first, check if there are correct numbers of arguments and no repetitions;
// split the argument

// void fill_stack(t_stack * stack, int * arr, const int SIZE)
// {
// 	for (int i = SIZE - 1; i >= 0; i--)
// 	{
// 		push_stack()
// 	}
// }

int	main(void)
{
	t_stack	*the_a;
	t_stack	*the_b;

	the_a = stack_init(1, 'a');
	the_b = stack_init_empty('b');
	push_init(the_a, 4);
	push_init(the_a, 3);
	push_init(the_a, 5);
	push_init(the_a, 2);
	sort_five(the_a, the_b);
	// stack_push(the_a, the_b);
	print_stack(the_a);
	clear_it(the_a);
	clear_it(the_b);
	return (1);
}
