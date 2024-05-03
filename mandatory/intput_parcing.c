/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intput_parcing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:55:38 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/03 20:14:46 by marikhac         ###   ########.fr       */
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

int	if_empty_argc(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (*(argv[i]) == '\0')
			return (1);
		i++;
	}
	return (0);
}

t_stack	*init_from_input(int argc, char **argv, const char letter)
{
	char	**mat;
	t_stack	*stack;

	mat = NULL;
	stack = stack_init_empty(letter);
	if (argc == 2)
	{
		mat = ft_split(argv[1], ' ');
		if (mat[0] == NULL || if_empty_argc(argc, argv)
			|| alloc_nums(argc_count(mat), mat, stack) == -1)
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
