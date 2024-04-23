/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/23 19:06:43 by marikhac         ###   ########.fr       */
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

t_node *node_init(const int number)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if(!new_node)
		free(new_node);
	new_node->value_ = number;
	return(new_node);
}

t_stack *stack_(t_node *node)
{
	t_stack *new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		free(new_stack);
	new_stack->head = node;
	return (new_stack);
}

void sort(t_stack *stack_a, t_stack *stack_b, t_node *number)
{
	if (NULL == stack_a->head)
		return ;
	push(number);

}

//before passing arguments, it's better to pass numbers manually. then only to use
//argc and argv;

//write find biggest_node;
//write find smallest_node;


//first, check if there are correct numbers of arguments and no repetitions;
//split the argument

int main()
{
	t_stack	*the_a;
	t_stack	*the_b;
	the_a = NULL;
	stack_(&the_a, nod_init(10));
	stack_(&the_b, nod_init(10));

	push(&the_a, nod_init(20));
	push(&the_a, nod_init(89));
	push(the_a, stack);
	stack_push();
	print_stack(the_a);
}
