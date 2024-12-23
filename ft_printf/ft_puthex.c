/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:55:27 by kozcan            #+#    #+#             */
/*   Updated: 2024/11/04 17:00:45 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int t, char str)
{
	int		len;
	char	*values;
	char	*values_x;

	values = "0123456789abcdef";
	values_x = "0123456789ABCDEF";
	if (t < 16)
	{
		if (str == 'x')
			return (ft_putchar(values[t]));
		else
			return (ft_putchar(values_x[t]));
	}
	else
	{
		len = ft_puthex(t / 16, str);
		return (len + ft_puthex(t % 16, str));
	}
	return (len);
}
