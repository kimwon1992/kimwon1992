/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonkim <wonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:04:15 by wonkim            #+#    #+#             */
/*   Updated: 2021/10/17 23:55:08 by wonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		idx;

	idx = 0;
	while (idx < (size - 1))
	{
		if (tab[idx] > tab[idx + 1])
		{
			tmp = tab[idx];
			tab[idx] = tab[idx + 1];
			tab[idx + 1] = tmp;
			idx = 0;
		}
		else
			idx++;
	}
}
