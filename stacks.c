/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:21:12 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/20 20:19:15 by marikhac         ###   ########.fr       */
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

t_node *node_init(const int number)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	new_node->value_ = number;
	new_node->next = NULL;
	return(new_node);
}

t_stack *new_node(const int number)
{
	t_stack *node = malloc(sizeof(t_stack));
	if (!node)
		free(node);
	node->head->value_ = number;
	return (node);
}
//before passing arguments, it's better to pass numbers manually. then only to use
//argc and argv;

//write find biggest_node;
//write find smallest_node;


//first, check if there are correct numbers of arguments and no repetitions;
//split the argument

int main()
{
	t_stack *the_a = NULL;
	push_stack(&the_a, 10);
    push_stack(&the_a, 20);
	print_stack(the_a);
}
