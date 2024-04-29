/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:31:57 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/29 21:33:52 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int if_empty(t_stack *stack)
{
	return(stack->head == NULL);
}

fptr	find_route(t_stack *stack, t_node *target)
{
	t_node *left;
	t_node *right;

	left = stack->head;
	right = stack->head->next;

	while(left != right)
	{
		if(left == target)
			return(rev_rotate);
		if(right == target)
			return(rotate);
		left = left->prev;
		right = right->next;
	}
	return(rotate);
}

void process_til_sorted(t_stack *stack, t_node *cheap)
{
	fptr f;

	f = find_route(stack, cheap);
	while(stack->head != cheap)
		f(stack, visible);
}

t_node *if_sorted(t_stack *stack)
{
	t_node *cheap;
	t_node *tmp;

	cheap = the_cheapest(stack);
	tmp = cheap->next;
	while(tmp != cheap)
	{
		if(tmp->value_ < tmp->prev->value_)
			return(NULL);
		tmp = tmp->next;
	}
	return(cheap);
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
	t_node *tmp;
	t_node *jupa;

	tmp = stack->head->next;
	while(tmp != stack->head)
	{
		jupa = tmp->next;
		free(tmp);
		tmp = jupa;
	}
	free(stack->head);
	free(stack);
}

void	print_stack(t_stack *choto)
{
	if(if_empty(choto) == 1)
	{
		free(choto);
		return;
	}
	t_node *tmp = choto->head;
	printf("%i\n", tmp->value_);
	tmp = tmp->next;
	while(choto->head != tmp)
	{
		printf("%i\n", tmp->value_);
		tmp = tmp->next;
	}
}
