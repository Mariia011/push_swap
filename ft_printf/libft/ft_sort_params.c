/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:59:08 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/03 15:43:18 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
/*{
	write(1, &c, 1);
}*/

// void	ft_swap(char **a, char **b)
// {
// 	char	*c;

// 	c = *a;
// 	*a = *b;
// 	*b = c;
// }

// int	partition(char **arr, int low, int high)
// {
// 	int	pivot;
// 	int	i;
// 	int	j;

// 	pivot = high;
// 	i = low - 1;
// 	j = low;
// 	while (j < high)
// 	{
// 		if (ft_strcmp(arr[j], arr[pivot]) < 0)
// 			ft_swap(&arr[++i], &arr[j]);
// 		++j;
// 	}
// 	ft_swap(&arr[++i], &arr[high]);
// 	return (i);
// }

// void	_qsort(char **arr, int low, int high)
// {
// 	int	pivot;

// 	if (low < high)
// 	{
// 		pivot = partition(arr, low, high);
// 		_qsort(arr, pivot + 1, high);
// 		_qsort(arr, low, pivot - 1);
// 	}
// }
