/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsizebin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:19:46 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:19:51 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	memsizebin(unsigned long long n)
{
	long long	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 2;
	}
	return (i);
}
