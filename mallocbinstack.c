/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocbinstack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:19:25 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:19:29 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

char	**mallocbinstack(int stack_a_size)
{
	char	**binstack;
	int		maxwidth;
	int		i;

	i = -1;
	maxwidth = maxbinwidth(stack_a_size);
	binstack = malloc((stack_a_size + 1) * sizeof(char *));
	while (++i < stack_a_size)
	{
		binstack[i] = malloc((maxwidth + 1) * sizeof(char));
		ft_memset((void *) binstack[i], 0, maxwidth + 1);
	}
	return (binstack);
}
