/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:23:07 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:23:10 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	sa(int *stack_a, int stack_a_size)
{
	int	tmpvalue;

	if (stack_a_size < 2)
		return ;
	tmpvalue = stack_a[0];
	*(stack_a) = *(stack_a + 1);
	*(stack_a + 1) = tmpvalue;
	write(1, "sa\n", 3);
}
