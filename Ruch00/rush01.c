void	ft_putchar(char x);

void	fr_lin(int x)
{
	if (x >= 1)
	{
		ft_putchar('/');
		x--;
	}
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 1)
	{
		ft_putchar('\\');
	}
}

void	mid_lin(int x)
{
	if (x >= 1)
	{
		ft_putchar('*');
		x--;
	}
	while (x > 1)
	{
		ft_putchar(' ');
		x--;
	}
	if (x == 1)
	{
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	fn_lin(int x)
{
	if (x >= 1)
	{
		ft_putchar('\\');
		x--;
	}
	while (x > 1)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 1)
	{
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		fr_lin(x);
		ft_putchar('\n');
	}
	while (y > 2)
	{
		mid_lin(x);
		y--;
	}
	if (y >= 2)
	{
		fn_lin(x);
		ft_putchar('\n');
	}
}
