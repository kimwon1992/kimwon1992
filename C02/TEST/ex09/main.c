/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonkim <wonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:10:40 by wonkim            #+#    #+#             */
/*   Updated: 2021/10/17 20:31:33 by wonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcapitalize.c"

int		main(void)
{
	char	*str_base;
	char	*str_base1;
	char	str_cap[42];
	char	str_cap1[61];
	int		index;
	int		index1;

	str_base1 = "salut, c0mment tu vas ? 42mots quarante-deux; cinquante+et+un";
	str_base = "Xk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	index = 0;
	index1 = 0;
	while (index < 42)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	str_cap[index] = '\0';
	while (index1 < 61)
	{
		str_cap1[index1] = str_base1[index1] + 0;
		index1++;
	}
	ft_strcapitalize(&str_cap[0]);
	ft_strcapitalize(&str_cap1[0]);
	printf("===CASE1===\n");
	printf("base 		: %s\n", str_base);
	//printf("capitalized : %s\n", str_lower);
	printf("changed		: %s\n", str_cap);
	printf("===CASE2===\n");
	printf("base 		: %s\n", str_base1);
	printf("changed		: %s\n", str_cap1);
}
