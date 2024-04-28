/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:31:57 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/28 17:59:31 by marikhac         ###   ########.fr       */
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

void	print_stack(t_stack *choto)
{
	if(if_empty(choto) == 1)
		return;
	t_node *tmp = choto->head;
	printf("%i\n", tmp->value_);
	tmp = tmp->next;
	while(choto->head != tmp)
	{
		printf("%i\n", tmp->value_);
		tmp = tmp->next;
	}
}
