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

int     ft_is_printable(char c)
{
        return (c < 32 || c > 127);
}

int     ft_str_is_printable(char *str)
{
        int     i;
        int     val;

        i = 0;
                val = 1;
        while (i < ft_strlen(str))
        {
                if (ft_is_printable(str[i]))
                        val = 0;
                i++;
        }
        return (val);
}

int main(void)
{
        printf("%d\n", ft_str_is_printable("abécde"));
        printf("%d\n", ft_str_is_printable("AFVHIHF"));
        printf("%d\n", ft_str_is_printable("c%sd1523c4Bb"));
        printf("%d\n", ft_str_is_printable(""));

        return 0;
}
