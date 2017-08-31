
int		ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (i == 0 || i == y - 1)
			{
				if (j == 0 || j == x - 1)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if (j == 0 || j == x - 1)
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}