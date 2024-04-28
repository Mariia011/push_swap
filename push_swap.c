/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/28 19:44:32 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void sort(t_stack *stack_a, t_stack *stack_b, t_node *number)
// {
// 	if (NULL == stack_a->head)
// 		return ;
// 	push(number);
// }

//before passing arguments, it's better to pass numbers manually. then only to use
//argc and argv;

//write find biggest_node;
//write find smallest_node;

//first, check if there are correct numbers of arguments and no repetitions;
//split the argument

int main()
{
	t_stack	*the_a;
	t_stack	*the_b;
	the_a = stack_init(20);
	push_init(the_a, 80);
	push_init(the_a, 89);
	stack_push(the_a, the_b);
	print_stack(the_a);
	// stack_push(the_a, the_b);
	print_stack(the_b);
	clear_it(the_a);
	clear_it(the_b);
	return(1);
	// clear_it(the_b);
}
