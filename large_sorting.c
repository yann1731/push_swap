/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:18:53 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:18:57 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

void	large_sorting(char **binstack_a, char **binstack_b, int bit)
{
	int	counter;
	int	stop;

	counter = 0;
	stop = strstack_size(binstack_a);
	while (bit > 0)
	{
		while (binstack_a[0][bit - 1] == '0')
		{
			pbbin(binstack_a, binstack_b);
			if (++counter == stop)
				stackrewind(binstack_a, binstack_b, &counter, &bit);
		}
		if (bit > 0)
			rabin(binstack_a);
		if (++counter == stop)
			stackrewind(binstack_a, binstack_b, &counter, &bit);
	}
}
