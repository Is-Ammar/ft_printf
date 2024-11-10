/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:50:16 by iammar            #+#    #+#             */
/*   Updated: 2024/11/06 17:11:54 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_put_xxnbr(unsigned int n);
int	ft_putchar(char c);
int	ft_putnbr( int n);
int	ft_putstr(const char *s);
int	ft_putunbr( unsigned int nb);
int	ft_putxnbr(unsigned int n);
int	ft_printf(const char *f, ...);
int	ft_putptr(unsigned long n);

#endif
