
#include "push_swap.h"


void	destroy(t_stack **stack)
{
	clear_it(*stack);
	*stack = NULL;
}

static int	_ac_count(char **mat)
{
	int	count;

	count = 0;
	while (mat[count])
	{
		count++;
	}
	return (count);
}

int if_empty_args(int argc, char **argv)
{
	int i = 0;
	while (i < argc)
	{
		if (*(argv[i]) == '\0')
			return 1;
		i++;
	}
	return 0;
}

t_stack	*init_from_input(int argc, char **argv, const char letter)
{
	char	**mat;
	t_stack	*stack;

	stack = stack_init_empty(letter);
	mat = NULL;
	if (argc == 2)
	{
		mat = ft_split(argv[1], ' ');
		if (if_empty_args(argc, argv) || alloc_nums(_ac_count(mat), mat, stack) == -1)
		{
			free_mat(mat);
			// destroy(&stack); // idk
			return (NULL);
		}
	}
	else if (argc < 2 || alloc_nums(argc - 1, argv + 1, stack) == -1)
	{
		// destroy(&stack); // idk
		return (NULL);
	}
	free_mat(mat);
	return (stack);
}
