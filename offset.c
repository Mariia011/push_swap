/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   offset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:24:17 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/01 17:59:53 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_sqrt(int x)
{
	int	start;
	int	end;
	int	mid;
	int	ans;

	if (x == 0 || x == 1)
		return (x);
	start = 1;
	end = x;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == x)
			return (mid);
		if (mid * mid < x)
		{
			start = mid + 1;
			ans = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (ans);
}

static int	ft_cbrt(int x)
{
	int	epsilon;
	int	guess;
	int	delta;

	epsilon = 1;
	guess = 1;
	do
	{
		delta = (x / (guess * guess) - guess) / 3;
		guess += delta;
	} while (delta > epsilon || delta < -epsilon);
	return (guess);
}

int	find_offset(t_stack *the_a)
{
	int	x;
	int	result;
	int	sqrt_x;
	int	cbrt_x;

	x = count_of_nodes(the_a);
	sqrt_x = ft_sqrt(x);
	cbrt_x = ft_cbrt(x);
	result = sqrt_x + cbrt_x;
	return (result);
}
