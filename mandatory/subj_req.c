/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subj_req.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/03 15:30:15 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *a, t_mode mode)
{
	int	tmp;

	tmp = a->head->value_;
	a->head->value_ = a->head->next->value_;
	a->head->next->value_ = tmp;
	if (mode == visible)
		ft_printf("s%c\n", a->name);
}

void	rotate(t_stack *stack, t_mode mode)
{
	if (if_empty(stack))
		return ;
	stack->head = stack->head->next;
	if (mode == visible)
		ft_printf("r%c\n", stack->name);
}

void	rev_rotate(t_stack *stack, t_mode mode)
{
	if (if_empty(stack))
		return ;
	stack->head = stack->head->prev;
	if (mode == visible)
		ft_printf("rr%c\n", stack->name);
}

void	rrr(t_stack *a, t_stack *b, t_mode mode)
{
	rev_rotate(a, silent);
	rev_rotate(b, silent);
	if (mode == visible)
		ft_printf("rrr\n");
}

void	rr(t_stack *a, t_stack *b, t_mode mode)
{
	rotate(a, silent);
	rotate(b, silent);
	if (mode == visible)
		ft_printf("rr\n");
}
