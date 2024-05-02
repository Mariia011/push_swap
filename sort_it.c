/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:07:27 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/02 18:04:44 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	search_index(int *arr, t_node *tmp)
{
	int	i;

	i = 0;
	while (arr[i] != tmp->value_)
	{
		i++;
	}
	return (i);
}

static void	sort_index(int *arr, t_stack *the_a)
{
	int		i;
	int		count;
	t_node	*tmp;

	i = 0;
	count = count_nodes(the_a);
	tmp = the_a->head->next;
	while (tmp != the_a->head)
	{
		tmp->index = search_index(arr, tmp);
		tmp = tmp->next;
	}
	the_a->head->index = search_index(arr, the_a->head);
}

static void	sort_the_a(t_stack *the_a, t_stack *the_b, int *arr)
{
	int	index;
	int	offset;
	int	size;

	index = 0;
	offset = find_offset(the_a);
	size = count_nodes(the_a);
	while (index < size)
	{
		if (the_a->head->value_ <= arr[index])
		{
			push_from_to(the_a, the_b);
			rotate(the_b, visible);
			index++;
		}
		else if (the_a->head->value_ <= arr[index + offset])
		{
			push_from_to(the_a, the_b);
			index++;
		}
		else
			rotate(the_a, visible);
	}
}

void	sort_it(t_stack *the_a, t_stack *the_b)
{
	int	*arr;

	if (if_empty(the_a))
		return ;
	arr = make_arr(the_a);
	if (count_nodes(the_a) <= 50)
	{
		up_to_ten(the_a, the_b);
		return ;
	}
	sort_index(arr, the_a);
	sort_the_a(the_a, the_b, arr);
	while (!if_empty(the_b))
	{
		if (the_b->head == the_biggest(the_b))
			push_from_to(the_b, the_a);
		else
		{
			process_til_sorted(the_b, the_biggest(the_b));
			push_from_to(the_b, the_a);
		}
	}
	free(arr);
}
