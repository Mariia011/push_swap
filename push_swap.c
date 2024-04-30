/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 16:42:33 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*the_a;
	t_stack	*the_b;

	the_a = init_from_input(argc, argv, 'a');
	the_b = stack_init_empty('b');
	if (the_a == NULL)
	{
		printf("Bad arguments walter:(\n");
		exit(EXIT_FAILURE);
	}
	up_to_ten(the_a, the_b);
	// sort_three(the_a);
	// printf("\n");
	// print_stack(the_a);
	// printf("\n");
	clear_it(the_a);
	return (1);
}
