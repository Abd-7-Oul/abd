void    ft_putchar(char x);
void    fr_lin(int x)
{
    if(x >= 1)
    {
        ft_putchar('A');
        x--;
    }
    while(x > 1)
    {
        ft_putchar('B');
        x--;
    }
    if(x == 1)
    {
        ft_putchar('C');
    }
}

void    mid_lin(int x, int y)
{
    int s;

    s = x;
    while (y > 0)
    {
        x = s;
        if(x >= 1)
        {
            ft_putchar('B');
            x--;
        }
        while(x > 1)
        {
            ft_putchar(' ');
            x--;
        }
        if(x == 1)
        {
            ft_putchar('B');
        }
        y--;
        ft_putchar('\n');
    }
}

void    rush(int x, int y)
{
    if(x >= 1 && y >= 1)
    {
        fr_lin(x);
        ft_putchar('\n');
        if(y > 2)
        {
            mid_lin(x, y - 2);
        }
        if( y >= 2)
        {
            fr_lin(x);
            ft_putchar('\n');
        }
    }
}