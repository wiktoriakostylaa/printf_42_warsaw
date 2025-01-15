/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:17:46 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/02 14:20:38 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_memmove kopiuje n bajtów z pamięci 
źródłowej (src) do pamięci docelowej (dest),
** obsługując przypadek nakładających się obszarów pamięci.
** Jeśli obszary pamięci nakładają się,
** kopiuje dane od końca, aby uniknąć nadpisania danych.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	d = (unsigned char *)dest;
	if (d > s && d < s + n)
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}

/*int main() {
	char buffer[20] = "Hello, World!";

	ft_memmove(buffer + 7, buffer, 6);
	buffer[13] = '\0';

	printf("Wynik: %s\n", buffer); // Oczekiwany wynik: "Hello, Hello,"

	return (0);
}*/