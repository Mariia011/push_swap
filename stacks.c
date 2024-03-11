/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/11 17:21:47 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int if_empty(t_stack *a)
{
	return(!a);
}

void clear(t_stack	**head)
{
	if (*head == NULL)
		return;

}

void erase(t_stack **stack)
{
	if ((*stack)->next)
		(*stack)->next->prev = (*stack)->prev;
	if ((*stack)->prev)
		(*stack)->prev->next = (*stack)->next;
	t_stack *tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
	printf("cleared \n");
}


void print_stack(t_stack *head)
{
	while(head)
	{
		printf("%d\n    ", head->value);
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

void push_stack(t_stack **head, int number)
{
	t_stack *new = new_node(number);
	new->next = (*head);
	(*head) = new;
}


int main()
{
	//int argc, char **argv
	t_stack *the_a = NULL;
	t_stack *the_b = NULL;
	// if (argc <= 2)
	// 	return (0);
	// while(argc)
	// {
	// }
	push_stack(&the_a, 10);
    push_stack(&the_a, 20);
    push_stack(&the_a, 30);
	push_stack(&the_b, 444);
	push_stack(&the_b, 333);
	print_stack(the_a);
	write(1, "\n", 1);
	print_stack(the_b);
	printf("\n _  _ \n a  b \n");
	push(&the_a, &the_b);
	print_stack(the_a);

	write(1, "\n", 1);
	print_stack(the_b);
	printf("\n _  _ \n a  b \n");

	erase(&the_a);
	write(1, "stack a is done", 4);
	erase(&the_b);
	return(0);
    //printf("%d popped from stack\n", sa_(&the_a));
    //printf("Top element is %d\n", (the_a));
}
