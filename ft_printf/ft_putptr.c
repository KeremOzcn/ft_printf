/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:48:29 by kozcan            #+#    #+#             */
/*   Updated: 2024/11/11 14:56:21 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(uintptr_t t)
{
	int		len;
	char	*values;

	values = "0123456789abcdef";
	if (t < 16)
		return (ft_putchar(values[t]));
	else
	{
		len = ft_ptr(t / 16);
		return (len + ft_ptr(t % 16));
	}
	return (len);
}

int	ft_putptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("(nil)");
	}
	else
	{
		len += ft_putstr("0x");
		len += ft_ptr(ptr);
	}
	return (len);
}
