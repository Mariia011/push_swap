
#include "push_swap.h"


t_node	*find(int const val, t_stack *stack)
{
	t_node	*l;
	t_node	*f;

	if (if_empty(stack))
		return (NULL);
	l = stack->head->prev;
	f = stack->head;
	while (f != l)
	{
		if (f->value_ == val)
			return (f);
		f = f->next;
	}
	if (l->value_ == val)
		return (l);
	return (NULL);
}


static size_t	_atoi_helper(char const *const str, int i, int res)
{
	while (str[i])
	{
		if (str[i] != ' ')
			return (invalid_input);
	}
	return (res);
}

static size_t	_atoi(char const *const str)
{
	int			i;
	long long	res;
	int			sign;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = (10 * res) + (str[i] - '0');
		if (res * sign > INT_MAX || res * sign < INT_MIN)
			return (invalid_input);
		i++;
	}
	return (_atoi_helper(str, i, res * sign));
}

int	alloc_nums(int ac, char **av, t_stack *stack)
{
	size_t	current;
	int		i;

	i = 0;
	while (i < ac)
	{
		current = _atoi(av[ac - 1 - i]);
		if (invalid_input == current || ((invalid_input != current)
				&& find(current, stack)))
			return (-1);
		push_init(stack, (int)current);
		i++;
	}
	return (0);
}

void	free_mat(char **mat)
{
	int	i;

	i = 0;
	if (NULL == mat)
	{
		return ;
	}
	while (mat[i])
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}


