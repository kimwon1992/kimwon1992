/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonkim <wonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:04:08 by wonkim            #+#    #+#             */
/*   Updated: 2021/10/17 23:52:11 by wonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	tmp;

	idx = 0;
	tmp = 0;
	while (idx < (size / 2))
	{
		tmp = tab[idx];
		tab[idx] = tab[size - 1 - idx];
		tab[size - 1 - idx] = tmp;
		idx++;
	}
}
