/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:54:23 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/15 13:35:23 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int nb)
{
	int				number;
	unsigned int	i;

	number = nb;
	i = 1;
	if (nb < 0 && nb != -2147483648)
	{
		number = -nb;
		i++;
	}
	while (number > 9)
	{
		number = number / 10;
		i++;
	}
	ft_putnbr_fd(nb, 1);
	if (nb == -2147483648)
		return (11);
	return (i);
}
