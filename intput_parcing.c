
#include "push_swap.h"


void	destroy(t_stack **stack)
{
	clear(*stack);
	free(*stack);
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

t_stack	*init_from_input(int argc, char **argv, const char letter)
{
	char	**mat;
	t_stack	*stack;

	stack = stack_init(letter);
	mat = NULL;
	if (argc == 2)
	{
		mat = ft_split(argv[1], ' ');
		if (alloc_nums(_ac_count(mat), mat, stack) == -1)
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
