/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimwon <kimwon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:30:09 by kimwon            #+#    #+#             */
/*   Updated: 2021/10/17 13:30:11 by kimwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

int     main(void)
{
    int a;
    int b;

    a = 1;
    b = 2;
    printf("before: %d %d\n", a, b);
    ft_swap(&a, &b);
    printf("before: %d %d\n", a, b);
}
