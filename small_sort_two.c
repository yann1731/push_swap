/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:24:35 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:24:37 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "push_swap.h"

void	small_sort_two(int *stack_a, int stack_a_size)
{
	if (stack_a_size == 2)
		if (stack_a[0] > stack_a[1])
			sa(stack_a, stack_a_size);
}
