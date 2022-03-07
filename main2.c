#include <stdio.h>
#include <stdlib.h>

int	maxbinwidth(int nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		nb /= 2;
		i++;
	}
	return (i);
}

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

static char	*posnumbin(unsigned long long n, char *str, int maxwidth)
{
	size_t		max;
	const char	*base;

	base = "01";
	max = memsizebin(n);
	str[maxwidth] = '\0';
	while (maxwidth > 0)
	{
		str[maxwidth - 1] = base[n % 2];
		n = n / 2;
		maxwidth--;
	}
	return (str);
}

char	*ft_itoa_bin(unsigned long long n, int maxwidth)
{
	char	*str;

	if (n == 0)
	{
		str = malloc((maxwidth + 1) * sizeof(char));
		str[maxwidth] = '\0';
		while (maxwidth > 0)
		{
			str[maxwidth - 1] = '0';
			maxwidth--; 
		}
		return (str);
	}
	str = malloc((maxwidth + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	else
		str = posnumbin(n, str, maxwidth);
	return (str);
}

int	main(void)
{
	char *bin;

	bin = ft_itoa_bin(6, maxbinwidth(500));
	printf("%s\n", bin);
	return (0);
}