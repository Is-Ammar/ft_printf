/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:39:26 by iammar            #+#    #+#             */
/*   Updated: 2024/10/07 22:43:36 by iammar           ###   ########.fr       */
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
int	ft_putPnbr( long nb);
int	ft_putxnbr(unsigned int n);
int	ft_printf(const char *f, ...);
int	ft_putptr(unsigned long n);

#endif
