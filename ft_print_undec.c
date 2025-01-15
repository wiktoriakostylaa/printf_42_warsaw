/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_undec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:25:25 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/15 13:35:43 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(int nb)
{
	if (nb > 9)
		ft_putnbr_unsigned(nb / 10);
	ft_putchar_fd((nb % 10) + '0', 1);
}

int	ft_print_undec(unsigned int nb)
{
	unsigned int	temp;
	int				i;

	temp = nb;
	i = 1;
	while (temp > 0)
	{
		temp = temp / 10;
		i++;
	}
	ft_putnbr_unsigned(nb);
	return (i);
}
