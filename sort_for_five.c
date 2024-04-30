/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:21:50 by marikhac          #+#    #+#             */
/*   Updated: 2024/04/30 13:51:46 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_five(t_stack *stack, t_stack *stack1)
{
	push_from_to(stack, stack1);
	push_from_to(stack, stack1);

	// printf("stack a is \n");
	// print_stack(stack);
	printf("\n");

	sort_three(stack);
	print_stack(stack);
	printf("\n");
	// push(stack, cheap->value_);
	// push(stack, big->value_);
	// rev_rotate(stack, visible);
	printf("stack b is\n");
	print_stack(stack1);
	printf("\n");

	// print_stack(stack1);
}
