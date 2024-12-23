/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:43:46 by kozcan            #+#    #+#             */
/*   Updated: 2024/11/11 13:51:38 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_specifier(va_list argsptr, char c);
int		ft_putchar(int c);
int		ft_puthex(unsigned int t, char str);
int		ft_putnbr(int n);
int		ft_putptr(uintptr_t ptr);
int		ft_ptr(uintptr_t t);
int		ft_putstr(char *s);
int		ft_putu(unsigned int t);
char	*ft_strchr(const char *s, int c);

#endif