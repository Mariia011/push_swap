/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/29 21:46:40 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//write push
//write pop

//write sort for three

//write find biggest_node;
//write find smallest_node;

//first, check if there are correct numbers of arguments and no repetitions;
//split the argument

// void fill_stack(t_stack * stack, int * arr, const int SIZE)
// {
// 	for (int i = SIZE - 1; i >= 0; i--)
// 	{
// 		push_stack()
// 	}
// }

int main()
{
	t_stack	*the_a;

	the_a = stack_init(3, 'a');
	push_init(the_a, 1);
	push_init(the_a, 2);
	// stack_push(the_a, the_b);
	sort_three(the_a);
	print_stack(the_a);


	clear_it(the_a);

	return(1);
}
