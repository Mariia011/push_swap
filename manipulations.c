/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:31:21 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/02 19:54:09 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_from_to(t_stack *stack1, t_stack *stack2)
{
	int	value;

	if (if_empty(stack1))
	{
		return ;
	}
	value = pop(stack1);
	push_init(stack2, value);
	ft_printf("p%c\n", stack2->name);
}

int	pop(t_stack *stack)
{
	int		val;
	t_node	*old_head;

	if (if_empty(stack) == 1)
		return (0);
	val = stack->head->value_;
	if (stack->head->next == stack->head)
	{
		clear_it(stack);
	}
	else
	{
		old_head = stack->head;
		stack->head->prev->next = stack->head->next;
		stack->head->next->prev = stack->head->prev;
		stack->head = stack->head->next;
		free(old_head);
	}
	return (val);
}

t_node	*the_cheapest(t_stack *a)
{
	t_node	*tmp;
	t_node	*cheapest;

	cheapest = a->head;
	tmp = a->head->next;
	while (tmp != a->head)
	{
		if (cheapest->value_ > tmp->value_)
			cheapest = tmp;
		tmp = tmp->next;
	}
	return (cheapest);
}

t_node	*the_biggest(t_stack *a)
{
	t_node	*tmp;
	t_node	*biggest;

	biggest = a->head;
	tmp = a->head->next;
	while (tmp != a->head)
	{
		if (biggest->value_ < tmp->value_)
			biggest = tmp;
		tmp = tmp->next;
	}
	return (biggest);
}

// void	print_stack(t_stack *choto)
// {
// 	t_node	*tmp;

// 	if (if_empty(choto) == 1)
// 	{
// 		free(choto);
// 		return ;
// 	}
// 	tmp = choto->head;
// 	ft_printf("%i\n", tmp->value_);
// 	tmp = tmp->next;
// 	while (choto->head != tmp)
// 	{
// 		ft_printf("%i\n", tmp->value_);
// 		tmp = tmp->next;
// 	}
// }
