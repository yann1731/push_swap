/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:57:19 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 22:57:23 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "push_swap.h"

int	strstack_size(char **binstack)
{
	int	count;

	count = 0;
	while (binstack[count][0] != '\0')
		count++;
	return (count);
}
