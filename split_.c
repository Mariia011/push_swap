/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:28:40 by marikhac          #+#    #+#             */
/*   Updated: 2024/03/09 16:50:54 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_delim(char *str)
{
	return (*str == ' ' || *str == '\n' || *str == '\t');
}

int	count_words(char *str)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (!if_delim(str))
			flag = 1;
		else if (if_delim(str) && flag)
			count++;
		str++;
	}
	return (count + flag);
}

int	current_len(char *str)
{
	int	count;

	count = 0;
	while (*str && !if_delim(str))
	{
		count++;
		str++;
	}
	return (count);
}

void	dealloc(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = 0;
		i++;
	}
	free(str); //we should free it properly by one, not in the end;
}

void	ft_strncp(char *str, char *result, int len)
{
	int	i;

	i = 0;
	while (i < len && *str)
	{
		result[i] = str[i];
		i++;
	}
	result[len] = '\0';
}

char	**alloc_(char **result, char *str, int count_p)
{
	int	i;
	int	cur_size;

	i = 0;
	cur_size = 0;
	while (i < count_p && *str)
	{
		while (if_delim(str))
			str++;
		cur_size = current_len(str);
		result[i] = malloc(cur_size + 1);
		if (!result[i])
			dealloc(result[i]);
		ft_strncp(str, result[i], cur_size); // allocates incorrectly;
		for (int i = 0; i < cur_size; i++)
			str++;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**split(char *str)
{
	int		count_p;
	char	**result;

	count_p = 0;
	if (!str)
		return (NULL);
	count_p = count_words(str);
	result = malloc((count_p + 1) * sizeof(char *));
	if (!result)
		free(result);
	return (alloc_(result, str, count_p));
}

int main(int argc, char **argv)
{
	char **chamich;
	if(argc == 1)
	{
		printf("Too few arguments");
		return(0);
	}
	else if ((argc == 2 && !argv[1][0]) || argc > 2)
	{
		printf("Oops, nothihg is put there");
		return (0);
	}
	else
		chamich = split(argv[1]);
	for(int i = 0; chamich[i] != NULL; i++)
	{
		printf("%s \n", chamich[i]);
		free(chamich[i]);
	}
	free(chamich);
	return(0);
}
