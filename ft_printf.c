/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:49:56 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/15 12:50:17 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(const char *format, void *arg)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_print_char((int)arg);
	else if (*format == 's')
		i += ft_print_str((char *)arg);
	else if (*format == 'p')
		i += ft_print_ptr((char *)arg);
	else if (*format == 'd' || *format == 'i')
		i += ft_print_int((int)arg);
	else if (*format == 'u')
		i += ft_print_undec((char *)arg);
	else if (*format == 'x')
		i += ft_print_hex((char *)arg);
	else if (*format == 'X')
		i += ft_print_hex((char *)arg);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	va_start(args, format);
	i = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				i += check(format, va_arg(args, void *));
			else if (*format == '%')
				i += ft_print_char('%');
		}
		else
			i += ft_print_char(*format);
		format++;
	}
}
