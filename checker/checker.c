/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:09:15 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/02 19:15:17 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void parcer(t_stack *the_a, t_stack *the_b)
{

}

void	parce(t_stack *a, t_stack *b, char const *input)
{
	if (!ft_strncmp(input, "pa", ft_strlen(input) - 1))
		push_a_b(b, a);
	else if (!ft_strncmp(input, "pb", ft_strlen(input) - 1))
		push_a_b(a, b);
	parce_rotate(a, b, input);
	parce_swap(a, b, input);
}

void	handle(t_stack *a, t_stack *b)
{
	char	*input;

	input = get_next_line(0);
	while (input)
	{
		parce(a, b, input);
		free(input);
		input = get_next_line(0);
	}
}

int main(int argc, char **argv)
{
	t_stack	*the_a;
	t_stack	*the_b;

	the_a = init_from_input(argc, argv, 'a');
	if (the_a == NULL)
	{
		__exit_handle("Error\n");
	}
	handle(the_a, the_b);
	destroy(&the_a);
	destroy(&the_b);
	if (fullsorted(the_a) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (0);
}
