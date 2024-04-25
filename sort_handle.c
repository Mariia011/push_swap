/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/25 15:36:20 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *a)
{
	int	tmp;

	tmp = a->head->value_;
	a->head->value_ = a->head->next->value_;
	a->head->next->value_ = tmp;
}

void	rotate(t_stack *a)
{
	if (a->head == NULL)
		return ;
	a->head = a->head->previous;
}

void	rev_rotate(t_stack *a)
{
	if (a->head == NULL)
		return ;
	a->head->previous = a->head;
}


