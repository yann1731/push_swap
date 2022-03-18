/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:25:49 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:25:52 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

char	**strstack(int *stack_a, int stack_a_size)
{
	int		i;
	int		*tempstack;
	char	**binstack;

	tempstack = malloc(stack_a_size * sizeof(int));
	binstack = malloc((stack_a_size + 1) * sizeof(char *));
	stack_copy(stack_a, tempstack, stack_a_size);
	bubble_sort(tempstack, stack_a_size);
	i = 0;
	while (i < stack_a_size)
	{
		binstack[findindex(stack_a, tempstack[i], stack_a_size)]
			= ft_itoa_bin((int) i, maxbinwidth(stack_a_size));
		i++;
	}
	free(tempstack);
	binstack[stack_a_size] = "\0\0\0\0";
	return (binstack);
}
