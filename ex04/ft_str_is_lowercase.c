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

int	ft_is_lower(char c)
{
	return (c < 97 || c > 122);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	val;

	i = 0;
		val = 1;
	while (i < ft_strlen(str))
	{
		if (ft_is_lower(str[i]))
			val = 0;
		i++;
	}
	return (val);
}

int main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcde"));
	printf("%d\n", ft_str_is_lowercase("AFVHIHF"));
	printf("%d\n", ft_str_is_lowercase("csd1523c4Bb"));
	printf("%d\n", ft_str_is_lowercase(""));

	return 0;
}
