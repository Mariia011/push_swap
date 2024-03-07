/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:20:58 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/07 19:18:14 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

#include <stdio.h>

typedef struct s_stack{
	int value;
	struct s_stack *next;
}t_stack;

#endif
