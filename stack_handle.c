/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:31:57 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/25 16:35:22 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int if_empty(t_stack *a)
{
	return(!a);
}

void	err(int mode)
{
	if(1 == mode)
		ft_putstr_fd("Error\n", 2);
	if(2 == mode)
		ft_putstr_fd("Not enough arguments", 2);
}

void clear_it(t_stack *stack)
{
	free(stack);
	stack = NULL;
}

