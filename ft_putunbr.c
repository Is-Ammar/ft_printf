/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:50:40 by iammar            #+#    #+#             */
/*   Updated: 2024/11/06 17:12:10 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
	{
		return (ft_putchar('0'));
	}
	if (nb >= 10)
	{
		count += ft_putunbr(nb / 10);
	}
	count += ft_putchar((nb % 10) + '0');
	return (count);
}
