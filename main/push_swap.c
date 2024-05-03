/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/03 15:48:31 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	__exit_handle(char *err)
{
	ft_putstr_fd(err, 2);
	exit(EXIT_FAILURE);
}

int	esh_main(int argc, char **argv)
{
	t_stack	*the_a;
	t_stack	*the_b;

	the_a = init_from_input(argc, argv, 'a');
	if (the_a == NULL)
	{
		__exit_handle("Error\n");
	}
	the_b = stack_init_empty('b');
	sort_it(the_a, the_b);
	clear_it(the_a);
	clear_it(the_b);
	free(the_b);
	free(the_a);
	return (0);
}

// int	main(int ac, char **av)
// {
// 	esh_main(ac, av);
// 	// system("leaks push_swap");
// 	return (0);
// }