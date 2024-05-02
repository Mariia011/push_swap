/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:10:06 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/02 17:57:15 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	partition(int *arr, int low, int high)
{
	int	i;
	int	j;

	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] < arr[high])
		{
			i++;
			_swap(arr + i, arr + j);
		}
		j++;
	}
	i++;
	_swap(arr + i, arr + high);
	return (i);
}

void	quick_sort(int *arr, int low, int high)
{
	int	pivo;

	if (low < high)
	{
		pivo = partition(arr, low, high);
		quick_sort(arr, pivo + 1, high);
		quick_sort(arr, low, pivo - 1);
	}
}
