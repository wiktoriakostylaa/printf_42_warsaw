/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:37:46 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/31 13:25:44 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	i;

	if (!ptr)
		return (ft_print_str("(nil)"));
	i = 0;
	i += ft_print_str("0x");
	i += ft_print_hex((unsigned long)ptr, 1);
	return (i);
}
