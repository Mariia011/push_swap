/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subj_req.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamirkha <aamirkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:18:00 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 14:30:03 by aamirkha         ###   ########.fr       */
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

void push_from_to(t_stack *stack1, t_stack *stack2)
{
	int value;
	if(if_empty(stack1))
	{
		return ;
	}
	value = pop(stack1);
	push_init(stack2, value);
	printf("p%c\n", stack2->name);
}
