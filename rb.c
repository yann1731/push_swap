/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:22:09 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:22:16 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	rb(int *stack_b, int stack_b_size)
{
	int	temp;

	temp = *stack_b;
	shiftstackup(stack_b, stack_b_size);
	*(stack_b + stack_b_size) = temp;
	write(1, "rb\n", 3);
}
