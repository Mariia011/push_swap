/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:28:29 by marikhac          #+#    #+#             */
/*   Updated: 2024/05/05 19:29:44 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	error_handle(t_stack *the_a, t_stack *the_b)
{
	clear_it(the_a);
	clear_it(the_b);
	__exit_handle("Error\n");
}

int	ft_strcmp(char *s1, char *s2)
{
	int	res;

	if (s1 == 0 || s2 == 0)
		return (0);
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	res = ((const unsigned char)(*s1) - (const unsigned char)(*s2));
	if (res < 0)
		return (-1);
	if (res > 0)
		return (1);
	return (0);
}
