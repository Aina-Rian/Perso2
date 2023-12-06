#include <stdio.h>

int     ft_strlen(char *str)
{
        int     size;

        size = 0;
        while (*str != '\0')
        {
                size++;
                str++;
        }
        return (size);
}

char	*ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main(void)
{
	char test[9] = "haleluha";
	char str;
	str[9] = ft_strupcase(test);
	printf("%s", test);
	printf("%s", str);
	return 0;
}
