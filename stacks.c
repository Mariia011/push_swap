/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/13 18:52:27 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int if_empty(t_stack *a)
{
	return(!a);
}

t_stack init(t_node *node)
{

}

t_node init (int tiv)
{
	t_node *new_node = malloc(sizeof(t_node));
	new_node->value_ = tiv;
	new_node->next = NULL;
}

void print_stack(t_stack *head)
{
	while(head)
	{
		printf("%d", head->value);
		head = head->next;
	}
}

t_stack *new_node(const int val)
{
	t_stack *node = malloc(sizeof(t_stack));
	if (!node)
		free(node);
	node->value = val;
	node->next = NULL;
	return (node);
}

int main()
{
	t_stack *the_a = NULL;
	push_stack(&the_a, 10);
    push_stack(&the_a, 20);
	print_stack(the_a);
}
