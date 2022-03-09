/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:14:13 by yst-laur          #+#    #+#             */
/*   Updated: 2022/03/09 14:14:19 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include "libft.h"

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

static char	*posnumbin(unsigned long long n, char *str)
{
	size_t		max;
	const char	*base;

	base = "01";
	max = memsizebin(n);
	str[max] = '\0';
	while (max > 0)
	{
		str[max - 1] = base[n % 2];
		n = n / 2;
		max--;
	}
	return (str);
}

char	*ft_itoa_bin(unsigned long long n)
{
	char	*str;
	size_t	max;

	max = memsizebin(n);
	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	str = malloc((max + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		str = posnumbin(n, str);
	return (str);
}
