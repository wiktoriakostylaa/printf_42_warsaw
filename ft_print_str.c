/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:24:27 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/15 12:31:26 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("null", 1);
		return (4);
	}
	ft_putstr_fd(s, 1);
	while (s[i] != '\0')
		i++;
	return (i);
}
