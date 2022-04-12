/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posnumbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:20:49 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:20:53 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

char	*posnumbin(unsigned long long n, char *str, int maxwidth)
{
	const char	*base;

	base = "01";
	str[maxwidth] = '\0';
	while (maxwidth > 0)
	{
		str[maxwidth - 1] = base[n % 2];
		n = n / 2;
		maxwidth--;
	}
	return (str);
}
