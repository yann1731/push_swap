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

void	stackrewind(char **binstack_a, char **binstack_b,
		int *counter, int *bit)
{
	int	stack_b_size;

	stack_b_size = strstack_size(binstack_b);
	*counter = 0;
	*bit -= 1;
	while (--stack_b_size >= 0)
		pabin(binstack_a, binstack_b);
}
