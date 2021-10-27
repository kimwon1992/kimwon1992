/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonkim <wonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:13:25 by wonkim            #+#    #+#             */
/*   Updated: 2021/10/26 12:31:14 by wonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*t;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	t = (int *)malloc(sizeof(int) * size);
	if (t == NULL)
		return (-1);
	while (min < max)
	{
		t[i] = min;
		min++;
		i++;
	}
	*range = t;
	return (i);
}
