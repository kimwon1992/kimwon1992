/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juji <juji@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:49:32 by juji              #+#    #+#             */
/*   Updated: 2021/10/09 21:31:20 by juji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int row, char left, char center, char right)
{
	int	j;

	j = 0;
	while (j < row)
	{
		if (j == 0)
			ft_putchar(left);
		else if (j == row - 1)
			ft_putchar(right);
		else
			ft_putchar(center);
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x < 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			ft_print_line(x, 'A', 'B', 'C');
		else if (i == y - 1)
			ft_print_line(x, 'C', 'B', 'A');
		else
			ft_print_line(x, 'B', ' ', 'B');
		ft_putchar('\n');
		i++;
	}
}
