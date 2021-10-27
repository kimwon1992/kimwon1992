/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonkim <wonkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:02:01 by wonkim            #+#    #+#             */
/*   Updated: 2021/10/18 16:16:38 by wonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("===CASE1===\n");
	printf("base   : %s\n", src);
	strncpy(dest, src, 11);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 11);
	printf("ft_cpy : %s\n", dest);
	src = "               a     ";
	printf("===CASE2===\n");
	printf("base   : %s\n", src);
	strncpy(dest, src, 16);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 16);
	printf("ft_cpy : %s\n", dest);
}
