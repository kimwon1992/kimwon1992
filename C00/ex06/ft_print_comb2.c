#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int nb)
{
	int	ten;
	int	one;

	if (nb > 9)
	{
		ten = nb / 10;
		one = nb % 10;
		ft_putchar(ten + '0');
		ft_putchar(one + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int	t;
	int	o;

	t = 0;
	while (t <= 99)
	{
		o = t + 1;
		while (o <= 99)
		{
			ft_putnum(t);
			ft_putchar(' ');
			ft_putnum(o);
			if (t < 98 || o < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++o;
		}
		++t;
	}
}

int	main()
{
	ft_print_comb2();	
	return (0);
}
