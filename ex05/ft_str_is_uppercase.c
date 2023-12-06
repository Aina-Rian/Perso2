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

int     ft_is_upper(char c)
{
        return (c < 65 || c > 91);
}

int     ft_str_is_uppercase(char *str)
{
        int     i;
        int     val;

        i = 0;
                val = 1;
        while (i < ft_strlen(str))
        {
                if (ft_is_upper(str[i]))
                        val = 0;
                i++;
        }
        return (val);
}

int main(void)
{
        printf("%d\n", ft_str_is_uppercase("abcde"));
        printf("%d\n", ft_str_is_uppercase("AFVHIHF"));
        printf("%d\n", ft_str_is_uppercase("csd1523c4Bb"));
        printf("%d\n", ft_str_is_uppercase(""));

        return 0;
}
