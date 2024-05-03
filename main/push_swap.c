/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/03 20:25:51 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

// " 1  " "   "
// push_swap "     29" "25          "     " "
//problem in atoi 

int	main(int argc, char **argv)
{
	t_stack	*the_a;
	t_stack	*the_b;

	if (argc == 1)
		return (1);
	the_a = init_from_input(argc, argv, 'a');
	if (the_a == NULL)
	{
		__exit_handle("Error\n");
	}
	ft_printf("abcd\n");
	the_b = stack_init_empty('b');
	sort_it(the_a, the_b);
	clear_it(the_a);
	clear_it(the_b);
	free(the_b);
	free(the_a);
	return (0);
}
