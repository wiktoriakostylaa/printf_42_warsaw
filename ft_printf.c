/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:49:56 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/31 13:14:13 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_print_char(va_arg(args, int));
	else if (*format == 's')
		i += ft_print_str(va_arg(args, char *));
	else if (*format == 'p')
		i += ft_print_ptr(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		i += ft_print_int(va_arg(args, int));
	else if (*format == 'u')
		i += ft_print_undec(va_arg(args, unsigned int));
	else if (*format == 'x')
		i += ft_print_hex(va_arg(args, unsigned int), 1);
	else if (*format == 'X')
		i += ft_print_hex(va_arg(args, unsigned int), 0);
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
				i += check(format, args);
			else if (*format == '%')
				i += ft_print_char('%');
		}
		else
			i += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (i);
}
