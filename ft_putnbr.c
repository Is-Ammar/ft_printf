/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:45:50 by iammar            #+#    #+#             */
/*   Updated: 2024/10/04 00:06:29 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr( int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		write(1, "2147483648", 10);
		count += 11;
		return (count);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		count += 1;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	else
		count += ft_putchar(nb + '0');
	return (count);
}
