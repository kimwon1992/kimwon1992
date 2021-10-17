void	ft_sort_int_tab(int *tab, int size)
{
	int		swp;
	int		cnt;

	cnt = 0;
	while (cnt < (size - 1))
	{
		if (tab[cnt] > tab[cnt + 1])
		{
			swp = tab[cnt];
			tab[cnt] = tab[cnt + 1];
			tab[cnt + 1] = swp;
			cnt = 0;
		}
		else
			cnt++;
	}
}
