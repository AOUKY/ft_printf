/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:26:34 by haouky            #+#    #+#             */
/*   Updated: 2024/01/07 13:52:32 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	a;
	int	b;

	a = ft_printf("hamza%i%d%s%c\n", 4, 2, "aouk", 'y');
	b = printf("hamza%i%d%s%c\n", 4, 2, "aouk", 'y');
	printf("sys; %d,|myn : %d,\n", b, a);
	printf("ss; %p\n", &a);
	ft_printf("mn; %p\n", &a);
	a = ft_printf("ashdfd\n");
	b = printf("ashdfd\n");
	printf("myn %d, sys %d,", a, b);
}
