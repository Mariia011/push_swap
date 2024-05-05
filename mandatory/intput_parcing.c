/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intput_parcing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:55:38 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/05 19:23:44 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	destroy(t_stack **stack)
{
	clear_it(*stack);
	free(*stack);
	*stack = NULL;
}

static int	argc_count(char **mat)
{
	int	count;

	count = 0;
	while (mat[count])
	{
		count++;
	}
	return (count);
}

int	if_is_dgt(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

int	if_empty_argc(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!if_is_dgt(argv[i]))
			return (1);
		i++;
	}
	return (argc < 2);
}

t_stack	*init_from_input(int argc, char **argv, const char letter)
{
	char	**mat;
	t_stack	*stack;

	if (if_empty_argc(argc, argv))
		return (NULL);
	mat = NULL;
	stack = stack_init_empty(letter);
	if (argc == 2)
	{
		mat = ft_split(argv[1], ' ');
		if (mat[0] == NULL || alloc_nums(argc_count(mat), mat, stack) == -1)
		{
			free_mat(mat);
			destroy(&stack);
			return (NULL);
		}
	}
	else if (argc < 2 || alloc_nums(argc - 1, argv + 1, stack) == -1)
	{
		destroy(&stack);
		return (NULL);
	}
	free_mat(mat);
	return (stack);
}
