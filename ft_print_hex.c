/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:37:13 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/19 13:16:24 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print(char *hex, int i)
{
	int	j;

	j = i - 1;
	while (j >= 0)
	{
		ft_print_char(hex[j]);
		j--;
	}
}

int	ft_print_hex(unsigned int value, int up_low)
{
	char	hex[16];
	char	*base;
	int		i;

	if (up_low)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (value == 0)
	{
		ft_print_char('0');
		return (1);
	}
	i = 0;
	while (value > 0)
	{
		hex[i++] = base[value % 16];
		value /= 16;
	}
	ft_print(hex, i);
	return (i);
}
