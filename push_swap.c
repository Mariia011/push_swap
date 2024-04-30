/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 14:44:46 by aamirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void fill_stack(t_stack * stack, int * arr, const int SIZE)
// {
// 	for (int i = SIZE - 1; i >= 0; i--)
// 	{
// 		push_stack()
// 	}
// }

int	main(int argc, char **argv)
{
	t_stack	*the_a;
	t_stack	*the_b;

	the_a = init_from_input(argc, argc, 'a');

	if (the_a == NULL)
	{
		printf("Bad arguments walter:(\n");
		exit(EXIT_FAILURE);
	}

	sort_three(the_a);
	print_stack(the_a);
	clear_it(the_a);

	return (1);
}
