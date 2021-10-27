/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonkim <wonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:02:37 by wonkim            #+#    #+#             */
/*   Updated: 2021/10/18 16:15:33 by wonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && 'z' >= str[i])
			|| (str[i] >= 'A' && 'Z' >= str[i])
			&& (str[i - 1] < '0' || '9' < str[i - 1])
			&& (str[i - 1] < 'A' || 'Z' < str[i - 1])
			&& (str[i - 1] < 'a' || 'z' < str[i - 1 ]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		++i;
	}
	return (str);
}
