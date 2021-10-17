void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	c;

	idx = 0;
	c = 0;
	while (idx < (size / 2))
	{
		c = tab[idx];
		tab[idx] = tab[size - 1 - idx];
		tab[size - 1 - idx] = c;
		idx++;
	}
}
