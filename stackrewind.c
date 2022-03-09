/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackrewind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:25:40 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:25:42 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	stackrewind(char **binstack_a, char **binstack_b, int *stack_a_size, int *stack_b_size, int *counter)
{
	*counter = 0;
	while (*stack_b_size > 0)
		pabin(binstack_a, binstack_b, stack_a_size, stack_b_size);
}
