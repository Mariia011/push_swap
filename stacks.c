/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/09 19:40:47 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int if_empty(t_stack *a)
{
	return(!a);
}

void print_node(t_stack *head)
{
	while(head)
	{
		printf("%d, ", head->value);
		head = head->next;
	}
}

t_stack *new_node(const int val)
{
	t_stack *node = malloc(sizeof(t_stack)); // safe
	node->value = val;
	node->next = NULL;
	return (node);
}

void push_(t_stack **head, int number)
{
	t_stack *new = new_node(number);
	new->next= (*head);
	(*head) = new;
	(*head)->next = NULL;
	print_node(new);
}

int main()
{
	//int argc, char **argv
	t_stack *the_a = NULL;

	// if (argc <= 2)
	// 	return (0);
	// while(argc)
	// {
	// }
    push_(&the_a, 10);
    push_(&the_a, 20);
    push_(&the_a, 30);

    //printf("%d popped from stack\n", sa_(&the_a));
    //printf("Top element is %d\n", (the_a));
}
