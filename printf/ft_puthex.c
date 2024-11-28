/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:54:33 by oait-si-          #+#    #+#             */
/*   Updated: 2024/11/26 05:50:25 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(size_t n, int *count)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, count);
		ft_puthex(n % 16, count);
	}
	else if (n < 10)
		ft_putchar(n + 48, count);
	else
		ft_putchar(n + 87, count);
}
