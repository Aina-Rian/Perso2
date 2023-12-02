void ft_putchar(char c);

void rush(int x, int y)
{
	int i;

	if (x == 0 || y ==0)
		return;
	if (x == 1 && y == 1)
		ft_putchar('o');

	i = 0;

	while(i < x)
	{
		if (i == 0)
		{
			ft_putchar('o');
		}else
		{
			if(i == x - 1)
				ft_putchar('o');
			else
				ft_putchar('-');
		}
		i++;
	}
	ft_putchar('\n');
}
