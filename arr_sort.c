/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:10:27 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/03 13:50:38 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_arr(t_stack *the_a)
{
	int		*arr;
	t_node	*tmp;
	int		i;
	int		n;

	i = 0;
	n = count_nodes(the_a);
	arr = malloc(sizeof(int) * n);
	if (!arr)
		__exit_handle("Malloc error\n");
	tmp = the_a->head;
	while (i < n)
	{
		arr[i] = tmp->value_;
		i++;
		tmp = tmp->next;
	}
	quick_sort(arr, 0, n - 1);
	return (arr);
}
