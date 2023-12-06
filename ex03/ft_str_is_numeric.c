#include <stdio.h>
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

int	ft_is_num(char c)
{
	return (c < 48 || c > 57);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	val;

	i = 0;
		val = 1;
	while (i < ft_strlen(str))
	{
		if (ft_is_num(str[i]))
			val = 0;
		i++;
	}
	return (val);
}

int main(void)
{
	printf("%d\n", ft_str_is_numeric("15234"));
	printf("%d\n", ft_str_is_numeric("csd1523c4"));
	printf("%d\n", ft_str_is_numeric(""));

	return 0;
}