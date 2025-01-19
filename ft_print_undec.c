/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_undec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:25:25 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/19 13:22:20 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr_unsigned(nb / 10);
	if (nb <= 9)
	{
		ft_putchar_fd(nb + 48, 1);
		return ;
	}
	ft_putchar_fd((nb % 10) + 48, 1);
}

int	ft_print_undec(unsigned int nb)
{
	unsigned int	temp;
	int				i;

	temp = nb;
	i = 1;
	while (temp > 9)
	{
		temp = temp / 10;
		i++;
	}
	ft_putnbr_unsigned(nb);
	return (i);
}
