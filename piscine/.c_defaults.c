int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');	
		nb *= -1;
	}

	if (nb >= 10)
	{	
		ft_putnbr(nb/10); 
		ft_putchar('0' + (nb%10));
	} else {
		ft_putchar('0' + nb);
	}
}

int		ft_strlen(char *str)
{
	char *addr;

	addr = str;
	while (*str)
		str++;
	return ((int)(&*str - &*addr));
}