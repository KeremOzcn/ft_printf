/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:01:49 by kozcan            #+#    #+#             */
/*   Updated: 2024/11/04 17:01:57 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(va_list argsptr, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(argsptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(argsptr, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(argsptr, uintptr_t)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(argsptr, int)));
	else if (c == 'u')
		return (ft_putu(va_arg(argsptr, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(argsptr, unsigned int), c));
	else if (c == '%')
		return (ft_putchar(37));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	argsptr;

	i = 0;
	len = 0;
	va_start(argsptr, str);
	while (*(str + i) != '\0')
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			len += ft_specifier(argsptr, *(str + i + 1));
			i++;
		}
		else
			len += ft_putchar(*(str + i));
		i++;
	}
	va_end(argsptr);
	return (len);
}
