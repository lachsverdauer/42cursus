/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:01:24 by emetaj            #+#    #+#             */
/*   Updated: 2023/06/15 12:26:52 by alafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_controller(char conv, va_list *va);
int	ft_printf(const char *format, ...);
int	print_ptr(unsigned long int n);
int	print_int(int n);
int	print_uint(unsigned int n);
int	print_hex(unsigned int n, char h);
int	print_s(char	*s);
#endif
