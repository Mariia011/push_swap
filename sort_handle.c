/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_handle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 12:33:44 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *a)
{
	int	tmp;

	tmp = a->head->value_;
	a->head->value_ = a->head->next->value_;
	a->head->next->value_ = tmp;
	printf("s%c\n", a->name);
}

void	rotate(t_stack *stack, t_mode mode)
{
	if (if_empty(stack))
		return ;
	stack->head = stack->head->next;
	if (mode == visible)
		printf("r%c\n", stack->name);
}

void	rev_rotate(t_stack *stack, t_mode mode)
{
	if (if_empty(stack))
		return ;
	stack->head = stack->head->prev;
	if (mode == visible)
		printf("rr%c\n", stack->name);
}

void	rrr(t_stack *a, t_stack *b)
{
	rev_rotate(a, silent);
	rev_rotate(b, silent);
	printf("rrr\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a, silent);
	rotate(b, silent);
	printf("rr\n");
}
