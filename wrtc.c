/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrtc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouky <haouky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:10:29 by haouky            #+#    #+#             */
/*   Updated: 2024/01/07 13:52:13 by haouky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	wrtc(char c)
{
	write(1, &c, 1);
	return (1);
}