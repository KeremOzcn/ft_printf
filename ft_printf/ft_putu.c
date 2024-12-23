/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:44:01 by kozcan            #+#    #+#             */
/*   Updated: 2024/11/04 16:57:12 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int t)
{
	int		len;

	len = 0;
	if (t < 10)
		return (ft_putchar(t + '0'));
	else
	{
		len = ft_putu(t / 10);
		return (len + ft_putu(t % 10));
	}
	return (len);
}
