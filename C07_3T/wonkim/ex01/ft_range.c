/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonkim <wonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:13:07 by wonkim            #+#    #+#             */
/*   Updated: 2021/10/26 11:48:58 by wonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * size);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
