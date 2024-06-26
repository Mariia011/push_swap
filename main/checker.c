/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:09:15 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/05 19:29:54 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus/checker.h"

void	parce_it(t_stack *the_a, t_stack *the_b, char *input)
{
	if (!ft_strcmp(input, "sa\n"))
		swap(the_a, silent);
	else if (!ft_strcmp(input, "sb\n"))
		swap(the_b, silent);
	else if (!ft_strcmp(input, "pa\n"))
		push_from_to(the_b, the_a, silent);
	else if (!ft_strcmp(input, "pb\n"))
		push_from_to(the_a, the_b, silent);
	else if (!ft_strcmp(input, "ra\n"))
		rotate(the_a, silent);
	else if (!ft_strcmp(input, "rb\n"))
		rotate(the_b, silent);
	else if (!ft_strcmp(input, "rr\n"))
		rr(the_a, the_b, silent);
	else if (!ft_strcmp(input, "rra\n"))
		rev_rotate(the_a, silent);
	else if (!ft_strcmp(input, "rrb\n"))
		rev_rotate(the_b, silent);
	else if (!ft_strcmp(input, "rrr\n"))
		rrr(the_a, the_b, silent);
	else
		error_handle(the_a, the_b);
}

void	checker(t_stack *a, t_stack *b)
{
	char	*input;

	input = get_next_line(STDIN_FILENO);
	while (input)
	{
		parce_it(a, b, input);
		free(input);
		input = get_next_line(STDIN_FILENO);
	}
}

static int	fullsorted(t_stack *the_a)
{
	t_node	*tmp;

	if (NULL == the_a || NULL == the_a->head)
		return (1);
	tmp = the_a->head->next;
	while (tmp != the_a->head)
	{
		if (tmp->value_ < tmp->prev->value_)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

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
	the_b = stack_init_empty('b');
	checker(the_a, the_b);
	if (fullsorted(the_a) && if_empty(the_b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	clear_it(the_a);
	clear_it(the_b);
	return (0);
}
