/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimwon <kimwon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:29:50 by kimwon            #+#    #+#             */
/*   Updated: 2021/10/17 13:29:53 by kimwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_ft.c"

int	main(void)
{
    int	a;
    int	*ptr1;
    int	**ptr2;
    int	***ptr3;
    int	****ptr4;
    int	*****ptr5;
    int	******ptr6;
    int	*******ptr7;
    int	********ptr8;
    int	*********ptr9;

    a = 1;
    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;
    printf("before: %d\n", a);
    ft_ultimate_ft(ptr9);
    printf("after : %d\n", a);
}
