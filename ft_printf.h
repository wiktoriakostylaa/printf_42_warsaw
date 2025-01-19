/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:43:30 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/19 13:16:15 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./Libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *type, ...);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_int(int nb);
int	ft_print_undec(unsigned int nb);
int	ft_print_hex(unsigned int value, int up_low);
int	ft_print_ptr(void *ptr);

#endif